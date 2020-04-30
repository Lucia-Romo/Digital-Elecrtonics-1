--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:48:10 04/30/2020
-- Design Name:   
-- Module Name:   C:/Users/fran/Desktop/UPM/ERASMUS/CUATRIMESTRE 2/CICT - Digital Electronics 1/Digital-Electronics-1/labs/PROJECT/downcounter/tb_encoder.vhd
-- Project Name:  PROJECT
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: encoder_ky040
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
 
ENTITY tb_encoder IS
END tb_encoder;
 
ARCHITECTURE behavior OF tb_encoder IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT encoder_ky040
    PORT(
         srst_n_i : IN  std_logic;
         clk_i : IN  std_logic;
         inA : IN  std_logic;
         inB : IN  std_logic;
         enc_sw : IN  std_logic;
         final_pos : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal srst_n_i : std_logic := '0';
   signal clk_i : std_logic := '0';
   signal inA : std_logic := '0';
   signal inB : std_logic := '0';
   signal enc_sw : std_logic := '0';

 	--Outputs
   signal final_pos : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_i_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: encoder_ky040 PORT MAP (
          srst_n_i => srst_n_i,
          clk_i => clk_i,
          inA => inA,
          inB => inB,
          enc_sw => enc_sw,
          final_pos => final_pos
        );

   -- Clock process definitions
   clk_i_process :process
   begin
		clk_i <= '0';
		wait for clk_i_period/2;
		clk_i <= '1';
		wait for clk_i_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_i_period*10;

      
      	    -- Reset activation
        srst_n_i <= '0'; wait for clk_i_period;
        srst_n_i <= '1';
		 
    FOR i IN 0 TO 7 LOOP 
			
			inA <= '0';
			inB <= '0';
			wait for 10 ns;
			inA <= '1';	
			enc_sw <= '1';
  			wait for 10 ns;
			inB <= '1';
			wait for 10 ns;
			inA <= '0';
			wait for 10 ns;
			inB <= '0';
			wait for 5 ns;
			
		END LOOP;
			--en_i <= '0';	 -- hold reset state for 100 ns.
			enc_sw <= '0';
					 
      wait;
   end process;

END;
