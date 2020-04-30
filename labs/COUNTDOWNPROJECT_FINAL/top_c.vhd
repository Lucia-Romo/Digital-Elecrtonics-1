----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:45:54 04/25/2020 
-- Design Name: 
-- Module Name:    top_c - Behavioral 
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

entity top_c is

PORT(
    clk_i : in std_logic;       -- 10 kHz clock signal
    BTN0 : in std_logic;       -- Synchronous reset
	 en_i : in std_logic;
   
    
	 -- PIN INPUTS
	 inA : in std_logic; --A
	 inB : in std_logic; --B
	 SWITCH_ENCODER: in std_logic; --Switch
	 
	 -- PIN OUTPUTS
	 outD : out std_logic_vector(4-1 downto 0)
	 );
	 
end entity;

architecture Behavioral of top_c is

	--signal srst_n_i : std_logic;
  signal s_en  : std_logic;
--	signal enc_sw : std_logic;	
--	signal dio : std_logic_vector(4-1 downto 0);	
	
begin

	--srst_n_i <= BTN0;
	--s_en <= en_i;
	--enc_sw <= SWITCH_ENCODER;
	--outD <= dio;

	
    --------------------------------------------------------------------
    -- Sub-block of clock_enable entity
    CLK_EN_0 : entity work.clock_enable(Behavioral)
	 generic map (
	            g_NPERIOD => x"09C4"
					)
	 port map (
	      clk_i           => clk_i,
			srst_n_i        => BTN0,
			clock_enable_o  => s_en
			);
	
--------------------------------------------------------------------
-- Sub-block of tm1637    
--	 DISP_O: entity work.display_tm1637
--			port map(
--				 clk_i      => clk_i,
--				 srst_n_i   => BTN0,
--				 outD       => dio
--			);	
--	
    --------------------------------------------------------------
    -- Sub-block of encoder
	 ENC_IN: entity work.encoder_ky040(Behavioral)
			port map(
				  clk_i => clk_i,
				  srst_n_i => BTN0,
				  en_i =>  en_i, -- Enable
				  salidaA => inA,
				  salidaB => inB,
				  enc_sw => SWITCH_ENCODER,
				  cnt_o => outD		   

			);

end Behavioral;

