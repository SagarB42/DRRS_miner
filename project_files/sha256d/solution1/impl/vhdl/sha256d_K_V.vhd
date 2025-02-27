-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity sha256d_K_V_rom is 
    generic(
             DWIDTH     : integer := 32; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 64
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of sha256d_K_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "01000010100010100010111110011000", 
    1 => "01110001001101110100010010010001", 
    2 => "10110101110000001111101111001111", 
    3 => "11101001101101011101101110100101", 
    4 => "00111001010101101100001001011011", 
    5 => "01011001111100010001000111110001", 
    6 => "10010010001111111000001010100100", 
    7 => "10101011000111000101111011010101", 
    8 => "11011000000001111010101010011000", 
    9 => "00010010100000110101101100000001", 
    10 => "00100100001100011000010110111110", 
    11 => "01010101000011000111110111000011", 
    12 => "01110010101111100101110101110100", 
    13 => "10000000110111101011000111111110", 
    14 => "10011011110111000000011010100111", 
    15 => "11000001100110111111000101110100", 
    16 => "11100100100110110110100111000001", 
    17 => "11101111101111100100011110000110", 
    18 => "00001111110000011001110111000110", 
    19 => "00100100000011001010000111001100", 
    20 => "00101101111010010010110001101111", 
    21 => "01001010011101001000010010101010", 
    22 => "01011100101100001010100111011100", 
    23 => "01110110111110011000100011011010", 
    24 => "10011000001111100101000101010010", 
    25 => "10101000001100011100011001101101", 
    26 => "10110000000000110010011111001000", 
    27 => "10111111010110010111111111000111", 
    28 => "11000110111000000000101111110011", 
    29 => "11010101101001111001000101000111", 
    30 => "00000110110010100110001101010001", 
    31 => "00010100001010010010100101100111", 
    32 => "00100111101101110000101010000101", 
    33 => "00101110000110110010000100111000", 
    34 => "01001101001011000110110111111100", 
    35 => "01010011001110000000110100010011", 
    36 => "01100101000010100111001101010100", 
    37 => "01110110011010100000101010111011", 
    38 => "10000001110000101100100100101110", 
    39 => "10010010011100100010110010000101", 
    40 => "10100010101111111110100010100001", 
    41 => "10101000000110100110011001001011", 
    42 => "11000010010010111000101101110000", 
    43 => "11000111011011000101000110100011", 
    44 => "11010001100100101110100000011001", 
    45 => "11010110100110010000011000100100", 
    46 => "11110100000011100011010110000101", 
    47 => "00010000011010101010000001110000", 
    48 => "00011001101001001100000100010110", 
    49 => "00011110001101110110110000001000", 
    50 => "00100111010010000111011101001100", 
    51 => "00110100101100001011110010110101", 
    52 => "00111001000111000000110010110011", 
    53 => "01001110110110001010101001001010", 
    54 => "01011011100111001100101001001111", 
    55 => "01101000001011100110111111110011", 
    56 => "01110100100011111000001011101110", 
    57 => "01111000101001010110001101101111", 
    58 => "10000100110010000111100000010100", 
    59 => "10001100110001110000001000001000", 
    60 => "10010000101111101111111111111010", 
    61 => "10100100010100000110110011101011", 
    62 => "10111110111110011010001111110111", 
    63 => "11000110011100010111100011110010" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity sha256d_K_V is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 64;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of sha256d_K_V is
    component sha256d_K_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    sha256d_K_V_rom_U :  component sha256d_K_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


