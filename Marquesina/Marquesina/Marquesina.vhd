----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:43:30 11/10/2019 
-- Design Name: 
-- Module Name:    Marquesina - Behavioral 
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

entity Marquesina is
	port ( 
	clkin: in std_logic;
	clear: in std_logic;
	clkout: out std_logic;
	seg1: out std_logic_vector(6 downto 0);
	seg2: out std_logic_vector(6 downto 0);
	seg3: out std_logic_vector(6 downto 0);
	seg4: out std_logic_vector(6 downto 0));
end Marquesina;

architecture Behavioral of Marquesina is
	signal cont: integer range 0 to 1;
	signal clk : std_logic := '1';
	type estado is (A, B, C, D, E, F, G, H);
	signal actual, futuro : estado;

begin

	--Reloj
	reloj: process (clkin, clk, cont) begin
		if(clkin'event and clkin = '1') then
			if(cont < 1) then
				cont <= cont + 1;
			else
				cont <= 0; 
				clk <= not clk;
			end if;
		end if;
	end process reloj;
	
	reloj2: process(clk) begin
		clkout <= clk;
	end process reloj2;

	--Clear e Inicio
	
	inicio: process(clk, clear) begin
		if(clear = '1') then
			actual <= A;
		elsif(clk'event and clk = '1') then
			actual <= futuro;
		end if;
	end process inicio;


	--Desplegar
	desplegar: process(actual) begin
		case actual is
			when A =>
				seg1 <= "1111111";
				seg2 <= "1111111";
				seg3 <= "1111111";
				seg4 <= "1111111";
				futuro<= B;
			when B =>
				seg1 <= "0001001"; --H
				seg2 <= "1111111";
				seg3 <= "1111111";
				seg4 <= "1111111";
				futuro<= C;
			when C =>
				seg1 <= "1000000"; --O
				seg2 <= "0001001"; --H
				seg3 <= "1111111";
				seg4 <= "1111111";
				futuro<= D;
			when D =>
				seg1 <= "1000111"; --L
				seg2 <= "1000000"; --O
				seg3 <= "0001001"; --H
				seg4 <= "1111111";
				futuro<= E;
			when E =>
				seg1 <= "0001000"; --A
				seg2 <= "1000111"; --L
				seg3 <= "1000000"; --O
				seg4 <= "0001001"; --H
				futuro<= F;
			when F =>
				seg1 <= "1111111";
				seg2 <= "0001000"; --A
				seg3 <= "1000111"; --L
				seg4 <= "1000000"; --O
				futuro<= G;
			when G =>
				seg1 <= "1111111";
				seg2 <= "1111111";
				seg3 <= "1000111"; --L
				seg4 <= "0001000"; --A
				futuro<= H;
			when H =>
				seg1 <= "0001001";
				seg2 <= "1111111";
				seg3 <= "1111111";
				seg4 <= "0001000"; --A
				futuro<= A;
		end case;
	end process desplegar;
end Behavioral;

