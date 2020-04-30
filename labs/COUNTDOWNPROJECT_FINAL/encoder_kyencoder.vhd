----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:20:48 04/25/2020 
-- Design Name: 
-- Module Name:    encoder_ky040 - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity encoder_ky040 is
generic(
    g_NBIT : positive := 5      -- Number of bits
);
    port (	srst_n_i : in STD_LOGIC; -- Synchronous reset
				clk_i : in STD_LOGIC; --clock
				en_i : in std_logic; --enable
				
				salidaA   : in  STD_LOGIC; --pin A
				salidaB   : in  STD_LOGIC; --pin B
				enc_sw : in std_logic; -- Switch of the encoder
				
				cnt_o : out  STD_LOGIC_VECTOR (4-1 downto 0)
				);
end encoder_ky040;

architecture Behavioral of encoder_ky040 is

	 signal counter_e : std_logic_vector(4-1 downto 0); -- encoder
    signal previousstateA : std_logic := '0';
    signal stateA: std_logic;
    signal stateB: std_logic;
    	 
	 signal s_cnt : std_logic_vector(4-1 downto 0); -- countdown
		  
    begin 
	 
    stateA <= salidaA;
    stateB <= salidaB;
    counter_e <= X"0";	 
	 
	 
	 --------------------------------------------------------------------
	 -- PROCESS OF CALCULATION OF THE ENCODER POSITION
	 --
	 --------------------------------------------------------------------
    	encoder_process : process(clk_i)
      begin
       if rising_edge(clk_i) then
			if srst_n_i='0' then   
					counter_e <= (others => '0');   -- Clear all bits
			elsif enc_sw = '1' then
				if stateA /= previousstateA then
						if stateB /= stateA then 
								if counter_e = 0 then 
									counter_e <= (others => '0');
								else 
									counter_e <= counter_e + 1;	
								end if;
						else
								if counter_e = 0 then 
									counter_e <= (others => '0');
								else 
								counter_e <= counter_e - 1;       
								end if;
						end if;
					previousstateA <= stateA;
					end if;
				end if;
		   end if;	 
			s_cnt <= std_logic_vector(counter_e);
end process encoder_process;




    --------------------------------------------------------------------
    -- bnry_cntdwn:
    -- Sequential process with synchronous reset and clock enable,
    -- which implements an one-way binary counter.
    --------------------------------------------------------------------
	 bnry_cntdwn: process (clk_i, en_i)
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
		  	cnt_o <= std_logic_vector(s_cnt);
    end process bnry_cntdwn;
		
		
end Behavioral;

