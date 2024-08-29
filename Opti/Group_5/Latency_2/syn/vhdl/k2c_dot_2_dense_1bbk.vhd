-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity k2c_dot_2_dense_1bbk_rom is 
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


architecture rtl of k2c_dot_2_dense_1bbk_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "10111110010001011011011111010110", 
    1 => "10111100010000111110100010100101", 
    2 => "00111101110001110011101101010101", 
    3 => "10111110001110001001001011010111", 
    4 => "00111100100101000111000010000010", 
    5 => "10111110101010010111110001011111", 
    6 => "00111110001001111110010011111001", 
    7 => "10111110000001011000010000101000", 
    8 => "10111110100010001010110100110100", 
    9 => "10111110100011100010110011100010", 
    10 => "00111110000111101100101010110000", 
    11 => "00111110010100110101010011100010", 
    12 => "00111100101000101010011010001001", 
    13 => "10111011101100001000001001111001", 
    14 => "10111110011010101011101101000111", 
    15 => "10111110100001110110110100101100", 
    16 => "10111110100110001010110100111110", 
    17 => "10111110000110001100100001100010", 
    18 => "00111101100111001101001000011011", 
    19 => "10111101100011010001000101100000", 
    20 => "10111110100110101001100001001000", 
    21 => "00111110100011100100000010001101", 
    22 => "10111101101011101100010100010011", 
    23 => "00111011100001001101001010101000", 
    24 => "10111101111101100101001000111110", 
    25 => "00111101010011110010101101010000", 
    26 => "00111101110011111100111001101000", 
    27 => "00111110100101000011000000000001", 
    28 => "00111110100011100111010001111000", 
    29 => "00111110101101100000110100100010", 
    30 => "10111110010111010000110100111100", 
    31 => "00111100100101110000001001101100", 
    32 => "00111110000101110000001110110011", 
    33 => "10111110011011101010011010010100", 
    34 => "10111101110111110011000101111110", 
    35 => "00111110010111101001111000010101", 
    36 => "10111110001000101110110011000101", 
    37 => "10111110100010111000111111110110", 
    38 => "00111110001011100111001110000010", 
    39 => "10111110100111000100000000100000", 
    40 => "00111110101001111011110001001010", 
    41 => "10111101000111001100010010111111", 
    42 => "10111110101100011111111110011100", 
    43 => "00111110100101010001010100001001", 
    44 => "10111110101100010010111010101110", 
    45 => "00111110101010001011101001111010", 
    46 => "10111101100111011001111001011100", 
    47 => "00111110001000001100101111011101", 
    48 => "00111101000010100100110011000101", 
    49 => "10111110001110011001011011010010", 
    50 => "10111101011100110001011101011111", 
    51 => "10111100010010010001111000001100", 
    52 => "00111110010011101010110000001000", 
    53 => "00111110100100000100010000001101", 
    54 => "10111101110011100100000110000111", 
    55 => "10111110100100100001101001001110", 
    56 => "10111101101011001100001110110110", 
    57 => "00111110101001000000011110101100", 
    58 => "10111110010111100001111101010010", 
    59 => "10111110101011000101011011011110", 
    60 => "10111110101000011001001001010001", 
    61 => "00111101110101100110110011010101", 
    62 => "10111110101011111010000111000010", 
    63 => "00111101100110001101100011101010" );


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

entity k2c_dot_2_dense_1bbk is
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

architecture arch of k2c_dot_2_dense_1bbk is
    component k2c_dot_2_dense_1bbk_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    k2c_dot_2_dense_1bbk_rom_U :  component k2c_dot_2_dense_1bbk_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


