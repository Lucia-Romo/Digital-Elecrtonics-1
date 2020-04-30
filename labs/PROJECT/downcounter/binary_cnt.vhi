
-- VHDL Instantiation Created from source file binary_cnt.vhd -- 20:33:07 04/30/2020
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT binary_cnt
	PORT(
		clk_i : IN std_logic;
		srst_n_i : IN std_logic;
		en_i : IN std_logic;
		in_encoder : IN std_logic_vector(3 downto 0);          
		cnt_o : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

	Inst_binary_cnt: binary_cnt PORT MAP(
		clk_i => ,
		srst_n_i => ,
		en_i => ,
		in_encoder => ,
		cnt_o => 
	);


