// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __k2c_dot_dense_13_lbW_H__
#define __k2c_dot_dense_13_lbW_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct k2c_dot_dense_13_lbW_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 320;
  static const unsigned AddressWidth = 9;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(k2c_dot_dense_13_lbW_ram) {
        ram[0] = "0b00111101100101111111111110100101";
        ram[1] = "0b10111101001001010011110000101010";
        ram[2] = "0b10111110000011000000111101101011";
        ram[3] = "0b10111101101111100001100110001100";
        ram[4] = "0b10111101001011100100010110000000";
        ram[5] = "0b10111101001011010000001101101110";
        ram[6] = "0b00111110001011110000010000001100";
        ram[7] = "0b10111110000111011001011011100000";
        ram[8] = "0b10111110000101111101000100111100";
        ram[9] = "0b10111110000011000100101100101000";
        ram[10] = "0b00111101011000110000010010001011";
        ram[11] = "0b00111101011101001001001001010101";
        ram[12] = "0b10111011011000111001011100010110";
        ram[13] = "0b00111110000000000111110011101100";
        ram[14] = "0b00111100100011011001011001011100";
        ram[15] = "0b00111101101001010000110001101110";
        ram[16] = "0b10111100010010111101111001111010";
        ram[17] = "0b10111100110111011001011111110101";
        ram[18] = "0b00111100101100110011001010011101";
        ram[19] = "0b00111100100110101111111110010001";
        ram[20] = "0b10111110001111010101110010011001";
        ram[21] = "0b00111110001011100111010100000111";
        ram[22] = "0b00111101100011110010101101001011";
        ram[23] = "0b10111110011000010110010110110011";
        ram[24] = "0b00111110000011010100101001100000";
        ram[25] = "0b00111101110000011101010101000101";
        ram[26] = "0b10111010110011011100001100100100";
        ram[27] = "0b00111110001001101011111100010110";
        ram[28] = "0b10111110000111101000110101101010";
        ram[29] = "0b10111110000011101111101010100101";
        ram[30] = "0b00111101010001010111110000010100";
        ram[31] = "0b10111101100011011101010100111010";
        ram[32] = "0b00111110010001010110000011011010";
        ram[33] = "0b00111101010101110100100111101001";
        ram[34] = "0b00111110010000101100100110111000";
        ram[35] = "0b10111011111100000110101010000110";
        ram[36] = "0b00111110000111100100010110100010";
        ram[37] = "0b10111101100100010010010001100101";
        ram[38] = "0b10111110010100000110100110010010";
        ram[39] = "0b00111101100010100101010101101100";
        ram[40] = "0b10111110010110011010010011100010";
        ram[41] = "0b10111101101101011011011101111001";
        ram[42] = "0b00111101100010110011101100011110";
        ram[43] = "0b00111110001001011011100000001010";
        ram[44] = "0b00111101100000101010010111101100";
        ram[45] = "0b00111101111000111001111000000101";
        ram[46] = "0b00111100110001010111110011000111";
        ram[47] = "0b00111101101000001110101011011111";
        ram[48] = "0b00111110000010110010010101000011";
        ram[49] = "0b00111110000001010101000100011110";
        ram[50] = "0b10111101010100000111000111010011";
        ram[51] = "0b10111101101111010110110010110100";
        ram[52] = "0b00111110000100010111001100110110";
        ram[53] = "0b10111100100110010101000101000111";
        ram[54] = "0b10111100101010011010001000000000";
        ram[55] = "0b00111101100011001100110000011101";
        ram[56] = "0b10111110000001000111100110100010";
        ram[57] = "0b10111110000011000000110111000100";
        ram[58] = "0b10111101110011001101110110111000";
        ram[59] = "0b10111101110101010100110001111010";
        ram[60] = "0b10111101101101011000001000110100";
        ram[61] = "0b00111011000000100000001110101010";
        ram[62] = "0b00111100110111101110011100010110";
        ram[63] = "0b10111110000100100011111100001111";
        ram[64] = "0b00111101101100101111011011000101";
        ram[65] = "0b10111110000010111010000110001110";
        ram[66] = "0b10111110010010101111100101100010";
        ram[67] = "0b10111110010010001111010110001100";
        ram[68] = "0b10111110001010011001111000011100";
        ram[69] = "0b00111101110110111000010010000000";
        ram[70] = "0b10111100001011101010001110010101";
        ram[71] = "0b00111110010110101101100101101110";
        ram[72] = "0b00111110000001010011010000111100";
        ram[73] = "0b00111101001000101101010100111000";
        ram[74] = "0b10111100110100011101011000110110";
        ram[75] = "0b10111101100001110000010000010111";
        ram[76] = "0b00111110010010100100100010101100";
        ram[77] = "0b10111101010110111000101000100011";
        ram[78] = "0b00111101000001001100101000101100";
        ram[79] = "0b00111110001110000101101011111110";
        ram[80] = "0b00111101100101100101101110011001";
        ram[81] = "0b00111101011011101110100100011111";
        ram[82] = "0b10111110011001011010010101111110";
        ram[83] = "0b10111110001100011010101001000000";
        ram[84] = "0b10111101011101001010001110110101";
        ram[85] = "0b10111110000101111010001010011110";
        ram[86] = "0b10111011110110010110001000000010";
        ram[87] = "0b00111110011101011101101001000110";
        ram[88] = "0b10111101111100010000111010010011";
        ram[89] = "0b10111110001011101010111001001001";
        ram[90] = "0b10111110011011101000000001001101";
        ram[91] = "0b10111101001111011110011000100100";
        ram[92] = "0b00111110000110111111101101111111";
        ram[93] = "0b00111110000101001001111110010010";
        ram[94] = "0b10111110001000001110000001010110";
        ram[95] = "0b00111101100000010111000010011000";
        ram[96] = "0b10111110001010101000010011000001";
        ram[97] = "0b10111110001110100110100010010000";
        ram[98] = "0b00111101100111010100111000010101";
        ram[99] = "0b00111110010010111100100111001100";
        ram[100] = "0b10111110001100110110101010101111";
        ram[101] = "0b00111100100100010101010001000101";
        ram[102] = "0b00111101000010000011001100101110";
        ram[103] = "0b00111100110101010011101111101011";
        ram[104] = "0b00111110000111100010111011010110";
        ram[105] = "0b10111110000111010111010001111111";
        ram[106] = "0b00111101111001111110101110101111";
        ram[107] = "0b10111110001010100010001110000110";
        ram[108] = "0b00111101101100101110100000111000";
        ram[109] = "0b10111110000011111010000111010011";
        ram[110] = "0b00111110011010011001011011010000";
        ram[111] = "0b00111110001101010100011010111101";
        ram[112] = "0b00111101110100001111100111110100";
        ram[113] = "0b00111011110001101011000001011011";
        ram[114] = "0b00111110001100101011111000000011";
        ram[115] = "0b00111110001110010010101011110011";
        ram[116] = "0b00111110000111010001100111010110";
        ram[117] = "0b00111101110101010011110101010001";
        ram[118] = "0b00111101101100001001000010100101";
        ram[119] = "0b10111101100111010110010111001101";
        ram[120] = "0b00111101111011000010111111011000";
        ram[121] = "0b00111101101100111101011011101101";
        ram[122] = "0b10111100110110011111010010111111";
        ram[123] = "0b00111110001011001101000101110111";
        ram[124] = "0b10111110010100011000101111111010";
        ram[125] = "0b00111110001010100000101100010000";
        ram[126] = "0b10111101110001100010111011100111";
        ram[127] = "0b10111110010000110101010010000001";
        ram[128] = "0b00111101110100000010101111111111";
        ram[129] = "0b00111101111100100110101101101101";
        ram[130] = "0b00111101110111011011010001110001";
        ram[131] = "0b10111101100110101011101110101111";
        ram[132] = "0b10111110001101101111101111101001";
        ram[133] = "0b00111110001111101110001000010111";
        ram[134] = "0b00111100110011000001011000110011";
        ram[135] = "0b10111100110110111110000101110001";
        ram[136] = "0b00111101011110111011111010000101";
        ram[137] = "0b10111110000100011111010110111111";
        ram[138] = "0b10111101011000001100101111111010";
        ram[139] = "0b00111100000100100110011011111000";
        ram[140] = "0b10111100110110000101111010011110";
        ram[141] = "0b10111110010011101001000010100001";
        ram[142] = "0b00111101110101011111011000000110";
        ram[143] = "0b10111101111111011111001110110000";
        ram[144] = "0b00111110000111001001101100001011";
        ram[145] = "0b00111110001111101010011001010001";
        ram[146] = "0b10111101111111101100101010000100";
        ram[147] = "0b10111101010001101110101000111001";
        ram[148] = "0b10111110000011110111111011100110";
        ram[149] = "0b00111101111001100000011110011111";
        ram[150] = "0b00111101100010111011010101000001";
        ram[151] = "0b00111101111100011011000101010011";
        ram[152] = "0b00111100101101111100111100000011";
        ram[153] = "0b10111110000100011000000011100110";
        ram[154] = "0b10111101110101000000010100010011";
        ram[155] = "0b10111101001111100100001111000000";
        ram[156] = "0b10111100100100011010100000001101";
        ram[157] = "0b10111100011111001011010110111101";
        ram[158] = "0b10111110000000100000110010000100";
        ram[159] = "0b00111101110001110100011110100111";
        ram[160] = "0b10111101100011110000100000011110";
        ram[161] = "0b00111110000010011111001100011101";
        ram[162] = "0b10111101001011110101000000011111";
        ram[163] = "0b10111101111000011100100111110010";
        ram[164] = "0b00111100011010111000101100110111";
        ram[165] = "0b10111101011000010011101100001110";
        ram[166] = "0b00111101010001000010010111001101";
        ram[167] = "0b10111110001010111101000010011011";
        ram[168] = "0b10111110000010000101010100101110";
        ram[169] = "0b00111011010010000101100011011010";
        ram[170] = "0b10111110000111101100101110000111";
        ram[171] = "0b00111101101110101101000010010011";
        ram[172] = "0b10111101110100111001011010001011";
        ram[173] = "0b00111101101110010101011001000001";
        ram[174] = "0b10111101100001010100100010110110";
        ram[175] = "0b10111101100010000100001101100000";
        ram[176] = "0b00111010000101000010011001011101";
        ram[177] = "0b10111110001101001100000001100110";
        ram[178] = "0b00111101100001111001100010111010";
        ram[179] = "0b00111110001011010101001111001011";
        ram[180] = "0b10111101111011011111011011111110";
        ram[181] = "0b10111101001101001101001001011010";
        ram[182] = "0b10111011100011011011011101111100";
        ram[183] = "0b10111100100100000010100110111010";
        ram[184] = "0b10111110000101101110100111101101";
        ram[185] = "0b10111110001000001011100111011011";
        ram[186] = "0b10111101000001001011010011110100";
        ram[187] = "0b00111101111100011010001001111010";
        ram[188] = "0b10111110000001110010010010101110";
        ram[189] = "0b00111110000000001000000010101000";
        ram[190] = "0b00111110000010001110100111111101";
        ram[191] = "0b10111110001011001000110110100001";
        ram[192] = "0b10111101001110000011010001101101";
        ram[193] = "0b10111110010010111000000011011100";
        ram[194] = "0b00111101111111010101010001101010";
        ram[195] = "0b00111100011100111001101011110001";
        ram[196] = "0b00111101110110000111110110010111";
        ram[197] = "0b00111100100010111101000000110000";
        ram[198] = "0b10111110000111110110010101100111";
        ram[199] = "0b10111110001111010011000011011101";
        ram[200] = "0b10111101100110110110110101010100";
        ram[201] = "0b10111101101000000100000100000100";
        ram[202] = "0b10111101110000111010000010011011";
        ram[203] = "0b00111110001001101011100110010001";
        ram[204] = "0b10111110010010111000001011011011";
        ram[205] = "0b00111110010011111001101000001001";
        ram[206] = "0b00111101110000011011001111011111";
        ram[207] = "0b00111011010110111100011100000001";
        ram[208] = "0b10111110001000111010011000100010";
        ram[209] = "0b00111100111000110010110110011100";
        ram[210] = "0b10111101110100100010010001101100";
        ram[211] = "0b00111101101001111010100110100111";
        ram[212] = "0b00111110000100111000001010001011";
        ram[213] = "0b00111110000011000000100110000000";
        ram[214] = "0b10111100000110011010000100010010";
        ram[215] = "0b00111101001000001000111111100100";
        ram[216] = "0b00111100010110100011000000001010";
        ram[217] = "0b10111101010100111011100110001000";
        ram[218] = "0b00111101000001011110101101000111";
        ram[219] = "0b00111110001000001100010000000100";
        ram[220] = "0b10111110001010100101011011000110";
        ram[221] = "0b00111101000011010010101111110010";
        ram[222] = "0b10111101110001101011110100101001";
        ram[223] = "0b10111110000110001000101101111101";
        ram[224] = "0b00111101110001010000100000011000";
        ram[225] = "0b10111110000001101111001111000001";
        ram[226] = "0b10111101100101100101001010111111";
        ram[227] = "0b00111110000100010101010110111101";
        ram[228] = "0b10111101111111100001101101111110";
        ram[229] = "0b10111110001011110100010001001110";
        ram[230] = "0b10111101111111000101000100110000";
        ram[231] = "0b00111110001000110000001101111111";
        ram[232] = "0b10111100101001001000100011100011";
        ram[233] = "0b10111011101000101111111110111101";
        ram[234] = "0b00111101011010101000000101010110";
        ram[235] = "0b10111101111110010011001100000011";
        ram[236] = "0b10111110001011011110110111001000";
        ram[237] = "0b00111101000011110000010010010111";
        ram[238] = "0b00111101100011110000110001010011";
        ram[239] = "0b00111101110000101010000011000001";
        ram[240] = "0b10111101100100010111101010110001";
        ram[241] = "0b00111101111001110001001001110000";
        ram[242] = "0b10111110010000001101011000100010";
        ram[243] = "0b10111100100001100110010011100111";
        ram[244] = "0b10111101010100010110100011010010";
        ram[245] = "0b00111101111110101110100001100010";
        ram[246] = "0b10111110000101101110001000010100";
        ram[247] = "0b00111110001001101110101010000011";
        ram[248] = "0b00111101110111100110100111001111";
        ram[249] = "0b00111110001101101000000010001111";
        ram[250] = "0b10111101001010101110001000001001";
        ram[251] = "0b00111101100011011100101001010100";
        ram[252] = "0b10111110001101010100101110101010";
        ram[253] = "0b10111110000010100010101000111010";
        ram[254] = "0b10111110001010101010110111001010";
        ram[255] = "0b00111110010000011001010101100000";
        ram[256] = "0b10111101001101001010100000100000";
        ram[257] = "0b00111101100101110010010101011110";
        ram[258] = "0b00111101011110100010001111011100";
        ram[259] = "0b10111110010001001100111010000000";
        ram[260] = "0b10111110000000101000010011110000";
        ram[261] = "0b10111110010100011111011001000010";
        ram[262] = "0b10111101111010111001011101001010";
        ram[263] = "0b10111110011000011001000101110110";
        ram[264] = "0b10111101101111000101001001100100";
        ram[265] = "0b10111100111011111100010001011100";
        ram[266] = "0b00111101110110110010011110101111";
        ram[267] = "0b10111110001000001011111110000001";
        ram[268] = "0b00111101100000000010101100011111";
        ram[269] = "0b00111101011101111100011010000000";
        ram[270] = "0b10111101010100001110001000011001";
        ram[271] = "0b00111101100010101100000111111101";
        ram[272] = "0b10111100100100000001010011000001";
        ram[273] = "0b00111101110100111000110101010101";
        ram[274] = "0b00111101011010101101001101000110";
        ram[275] = "0b10111100101001010010110011101111";
        ram[276] = "0b10111011000011111001001011101001";
        ram[277] = "0b00111100011001010011010010011011";
        ram[278] = "0b00111101111001000001001000110101";
        ram[279] = "0b00111110001110001010001011100000";
        ram[280] = "0b10111100011010010000111110100001";
        ram[281] = "0b10111101110110101001110010111110";
        ram[282] = "0b00111010110000100110010010111100";
        ram[283] = "0b10111100101101001101000011110001";
        ram[284] = "0b10111110000010101001011000110001";
        ram[285] = "0b00111101010001000110000001010011";
        ram[286] = "0b00111101011101100101010001110111";
        ram[287] = "0b10111101100000110101000111011100";
        ram[288] = "0b10111110001110100100011101110001";
        ram[289] = "0b00111110001011011111001011101000";
        ram[290] = "0b10111101111110010010000001101010";
        ram[291] = "0b00111110000111000101110011001100";
        ram[292] = "0b10111101001110110110001001011110";
        ram[293] = "0b00111110010101100101100101111010";
        ram[294] = "0b00111011101011101101101100011010";
        ram[295] = "0b10111110000110100111000101101110";
        ram[296] = "0b00111101111110101100011000000010";
        ram[297] = "0b00111101010101010001000100100101";
        ram[298] = "0b10111101101111010111100110101100";
        ram[299] = "0b10111101101010110100000100111010";
        ram[300] = "0b10111101010110100101011010011010";
        ram[301] = "0b10111110001010100011001101000001";
        ram[302] = "0b00111110001011000101100011101101";
        ram[303] = "0b10111110001111011011100010111000";
        ram[304] = "0b00111101110001000110110110000011";
        ram[305] = "0b10111110000101000010001100000011";
        ram[306] = "0b00111110001010101001011110101100";
        ram[307] = "0b00111110000000011001010010010000";
        ram[308] = "0b10111110000110010110110010000110";
        ram[309] = "0b00111101110101110000101000101100";
        ram[310] = "0b00111101000100000111100010101100";
        ram[311] = "0b00111100110011111010000000000100";
        ram[312] = "0b10111110001000100000101001101111";
        ram[313] = "0b00111101000000001000011101001100";
        ram[314] = "0b00111101111001110101111111100010";
        ram[315] = "0b00111110000101010010101000001101";
        ram[316] = "0b00111101100100110010000001100011";
        ram[317] = "0b00111101101111001110011000001010";
        ram[318] = "0b10111101111001011100100001010100";
        ram[319] = "0b00111101111110010011111010011100";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(k2c_dot_dense_13_lbW) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 320;
static const unsigned AddressWidth = 9;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


k2c_dot_dense_13_lbW_ram* meminst;


SC_CTOR(k2c_dot_dense_13_lbW) {
meminst = new k2c_dot_dense_13_lbW_ram("k2c_dot_dense_13_lbW_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~k2c_dot_dense_13_lbW() {
    delete meminst;
}


};//endmodule
#endif
