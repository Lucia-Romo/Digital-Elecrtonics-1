----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    01:44:39 04/30/2020 
-- Design Name: 
-- Module Name:    top - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity top is
generic (
    g_NBIT : positive := 4      -- Number of bits
);
  
PORT(
    clk_i : in std_logic;       -- 10 kHz clock signal
    BTN0 : in std_logic;       -- Synchronous reset
	 en_i : in std_logic;
   
    
	 -- PIN INPUTS
	 inA : in std_logic; --A
	 inB : in std_logic; --B
	 SWITCH_ENCODER: in std_logic; --Switch
	 
	 -- PIN OUTPUTS
	 outD : out std_logic_vector(g_NBIT-1 downto 0)
	 );
end top;

architecture Behavioral of top is

	signal union : std_logic_vector(g_NBIT-1 downto 0);
	signal s_en  : std_logic;
	
begin


	----------------------------------------------------------------------
	-- Sub-block of clock_enable entity
	----------------------------------------------------------------------
	CLK_EN_0 : entity work.clock_enable(Behavioral)
	generic map (
				g_NPERIOD => x"09C4")
	port map (
				clk_i           => clk_i,
				srst_n_i        => BTN0,
				clock_enable_o  => s_en
				);
	
    ----------------------------------------------------------------------
    -- Sub-block of encoder
	 -----------------------------------------------------------------------
	 ENC_IN: entity work.encoder_ky040(Behavioral)
			port map(
				  clk_i => clk_i,
				  srst_n_i => BTN0,
				  en_i =>  en_i, 
				  inA => inA,
				  inB => inB,
				  enc_sw => SWITCH_ENCODER	   

			);
			
	 ----------------------------------------------------------------------
    -- Sub-block of counter
	 -----------------------------------------------------------------------		
			CNT_DOWN: entity work.binary_cnt(Behavioral)
			port map(
				  clk_i => clk_i,
				  srst_n_i => BTN0,
				  en_i =>  en_i,
				  cnt_o  => outD
			);
			
			
end Behavioral;

