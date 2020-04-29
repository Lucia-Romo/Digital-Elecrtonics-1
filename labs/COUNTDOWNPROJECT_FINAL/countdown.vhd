----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:42:35 04/25/2020 
-- Design Name: 
-- Module Name:    countdown - Behavioral 
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
use IEEE.std_logic_1164.all;
use IEEE.NUMERIC_STD.ALL;
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity countdown is
generic(
    g_NBIT : positive := 5      -- Number of bits
);
port(
    clk_i    : in  std_logic;
    srst_n_i : in  std_logic;   -- Synchronous reset (active low)
    en_i     : in  std_logic;   -- Enable
	 sig_cnt  : in std_logic_vector(4-1 downto 0);
	 
    cnt_o    : out std_logic_vector(4-1 downto 0)
);
end countdown;

architecture Behavioral of countdown is


    signal s_cnt : std_logic_vector(4-1 downto 0); -- encoder
--	 signal sig_disp : std_logic_vector(3 downto 0); -- display
--	 
--	 signal sA: std_logic;
--	 signal sB: std_logic;
--	 signal e_sw: std_logic;

	 
begin

	 s_cnt <= std_logic_vector(sig_cnt);	

    --------------------------------------------------------------------
    -- bnry_cntdwn:
    -- Sequential process with synchronous reset and clock enable,
    -- which implements an one-way binary counter.
    --------------------------------------------------------------------
    bnry_cntdwn: process (clk_i)
    begin
	 
        if rising_edge(clk_i) then  -- Rising clock edge
            if srst_n_i = '0' then  -- Synchronous reset (active low)
                 s_cnt <= (others => '0');  -- Clear all bits
            elsif en_i = '1' then
						if s_cnt = 0 then 
							s_cnt <= (others => '0');
						else 
							s_cnt <= s_cnt - 1; -- Normal operation
						end if;
            end if;
        end if;
		  
    end process bnry_cntdwn;
	 
	 cnt_o <= std_logic_vector(s_cnt);
	 
-- ENCODER SUB-BLOCK

--	IN_ENCODER: entity work.encoder_ky040
--    			port map(
--						clk_i => clk_i,
--						srst_n_i => srst_n_i,
--						salidaA => sA,
--						salidaB => sB,
--						enc_sw => e_sw,
--        				POS => s_cnt
--        		);

end Behavioral;

