
-- VHDL Instantiation Created from source file top_c.vhd -- 20:38:44 04/29/2020
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT top_c
	PORT(
		clk_i : IN std_logic;
		BTN0 : IN std_logic;
		en_i : IN std_logic;
		inA : IN std_logic;
		inB : IN std_logic;
		SWITCH_ENCODER : IN std_logic;       
		outD : INOUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

	Inst_top_c: top_c PORT MAP(
		clk_i => ,
		BTN0 => ,
		en_i => ,
		inA => ,
		inB => ,
		SWITCH_ENCODER => ,
		outD => 
	);


