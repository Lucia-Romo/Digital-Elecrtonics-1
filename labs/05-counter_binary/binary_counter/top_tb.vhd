--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:38:53 04/29/2020
-- Design Name:   
-- Module Name:   C:/Users/fran/Desktop/UPM/ERASMUS/CUATRIMESTRE 2/CICT - Digital Electronics 1/Digital-Electronics-1/labs/05-counter_binary/binary_counter/top_tb.vhd
-- Project Name:  binary_counter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: top
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY top_tb IS
END top_tb;
 
ARCHITECTURE behavior OF top_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top
    PORT(
         clk_i : IN  std_logic;
         BTN0 : IN  std_logic;
         disp_seg_o : OUT  std_logic_vector(6 downto 0);
         disp_dig_o : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk_i : std_logic := '0';
   signal BTN0 : std_logic := '0';

 	--Outputs
   signal disp_seg_o : std_logic_vector(6 downto 0);
   signal disp_dig_o : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_i_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top PORT MAP (
          clk_i => clk_i,
          BTN0 => BTN0,
          disp_seg_o => disp_seg_o,
          disp_dig_o => disp_dig_o
        );

   -- Clock process definitions
   clk_i_process :process
   begin
		clk_i <= '0';
		wait for clk_i_period/2;
		clk_i <= '1';
		wait for clk_i_period/2;
   end process;
 

  stim_proc: process
    begin
        en_i <= '0';
        srst_n_i <= '1'; wait for clk_i_period;
   
        -- Reset activation
        srst_n_i <= '0'; wait for clk_i_period;
        srst_n_i <= '1';

        -- Clock enable pulses
        for i in 0 to 10 loop
            en_i <= '1'; wait for clk_i_period;
            en_i <= '0'; wait for clk_i_period*3;
        end loop;

        -- Reset activation
        srst_n_i <= '0'; wait for clk_i_period;
        srst_n_i <= '1';

        -- Clock enable pulses
        for i in 0 to 100 loop
            en_i <= '1'; wait for clk_i_period;
            en_i <= '0'; wait for clk_i_period*3;
        end loop;

      wait;
   end process;

END;
