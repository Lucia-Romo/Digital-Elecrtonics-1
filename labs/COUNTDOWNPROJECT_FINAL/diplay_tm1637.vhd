----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:36:25 04/25/2020 
-- Design Name: 
-- Module Name:    diplay_tm1637 - Behavioral 
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

entity display_tm1637 is
	port( clk_i    : in  std_logic;
			srst_n_i : in  std_logic;   -- Synchronous reset (active low)
			dio : out std_logic_vector(4-1 downto 0) -- Input of data
    );	
end display_tm1637;

architecture Behavioral of display_tm1637 is
	signal data : std_logic_vector(4-1 downto 0);
	signal en_i : std_logic;
	 signal sA: std_logic;
	 signal sB: std_logic;	
	 signal e_sw: std_logic;
	 
begin
	dio <= data;
	
-- COUNTDOWN SUB-BLOCK

	O_CNTDWN: entity work.encoder_ky040
    			port map(
						clk_i => clk_i,
						srst_n_i => srst_n_i,
						en_i => en_i,
						salidaA => sA,
						salidaB => sB,
						enc_sw => e_sw,
                	cnt_o => data
                );

end Behavioral;

