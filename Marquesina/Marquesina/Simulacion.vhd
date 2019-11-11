--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:24:32 11/10/2019
-- Design Name:   
-- Module Name:   C:/Users/ximmi_000/Documents/DSD/Marquesina/Marquesina/Simulacion.vhd
-- Project Name:  Marquesina
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Marquesina
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
 
ENTITY Simulacion IS
END Simulacion;
 
ARCHITECTURE behavior OF Simulacion IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Marquesina
    PORT(
         clkin : IN  std_logic;
         clear : IN  std_logic;
         clkout : OUT  std_logic;
         seg1 : OUT  std_logic_vector(6 downto 0);
         seg2 : OUT  std_logic_vector(6 downto 0);
         seg3 : OUT  std_logic_vector(6 downto 0);
         seg4 : OUT  std_logic_vector(6 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clkin : std_logic := '0';
   signal clear : std_logic := '0';

 	--Outputs
   signal clkout : std_logic;
   signal seg1 : std_logic_vector(6 downto 0);
   signal seg2 : std_logic_vector(6 downto 0);
   signal seg3 : std_logic_vector(6 downto 0);
   signal seg4 : std_logic_vector(6 downto 0);

   -- Clock period definitions
   constant clkin_period : time := 10 ns;
   constant clkout_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Marquesina PORT MAP (
          clkin => clkin,
          clear => clear,
          clkout => clkout,
          seg1 => seg1,
          seg2 => seg2,
          seg3 => seg3,
          seg4 => seg4
        );

   -- Clock process definitions
   clkin_process :process
   begin
		clkin <= '0';
		wait for clkin_period/2;
		clkin <= '1';
		wait for clkin_period/2;
   end process;
 
   clkout_process :process
   begin
		clkout <= '0';
		wait for clkout_period/2;
		clkout <= '1';
		wait for clkout_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clkin_period*10;

      -- insert stimulus here 
		clear <= '0';

      wait;
   end process;

END;
