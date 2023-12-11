#include "goldilocks_cubic_extension.hpp"
#include "zhInv.hpp"
#include "starks.hpp"
#include "constant_pols_starks.hpp"
#include "allSteps.hpp"

void AllSteps::step1_first(StepsParams &params, uint64_t i) {
     Goldilocks::copy(params.pols[44035 + i*17], params.pols[11 + i*16]);
     Goldilocks::Element tmp_0;
     Goldilocks::copy(tmp_0, params.pols[12 + i*16]);
     Goldilocks::Element tmp_1;
     Goldilocks::copy(tmp_1, tmp_0);
     Goldilocks::mul(params.pols[44032 + i*17], tmp_1, params.pols[44035 + i*17]);
     Goldilocks::Element tmp_2;
     Goldilocks::copy(tmp_2, params.pols[13 + ((i + 1)%1024)*16]);
     Goldilocks::Element tmp_3;
     Goldilocks::copy(tmp_3, tmp_2);
     Goldilocks::mul(params.pols[44033 + i*17], tmp_3, params.pols[44035 + i*17]);
     Goldilocks::Element tmp_4;
     Goldilocks::mul(tmp_4, params.pols[12 + i*16], params.pols[13 + ((i + 1)%1024)*16]);
     Goldilocks::Element tmp_5;
     Goldilocks::copy(tmp_5, tmp_4);
     Goldilocks::mul(params.pols[44034 + i*17], tmp_5, params.pols[44035 + i*17]);
     Goldilocks::copy(params.pols[44039 + i*17],  params.pConstPols->getElement(6,i));
     Goldilocks::Element tmp_6;
     Goldilocks::copy(tmp_6,  params.pConstPols->getElement(7,i));
     Goldilocks::Element tmp_7;
     Goldilocks::copy(tmp_7, tmp_6);
     Goldilocks::mul(params.pols[44036 + i*17], tmp_7, params.pols[44039 + i*17]);
     Goldilocks::Element tmp_8;
     Goldilocks::copy(tmp_8,  params.pConstPols->getElement(8,i));
     Goldilocks::Element tmp_9;
     Goldilocks::copy(tmp_9, tmp_8);
     Goldilocks::mul(params.pols[44037 + i*17], tmp_9, params.pols[44039 + i*17]);
     Goldilocks::Element tmp_10;
     Goldilocks::copy(tmp_10, params.pols[14 + i*16]);
     Goldilocks::Element tmp_11;
     Goldilocks::copy(tmp_11, tmp_10);
     Goldilocks::mul(params.pols[44038 + i*17], tmp_11, params.pols[44039 + i*17]);
}

void AllSteps::step1_i(StepsParams &params, uint64_t i) {
     Goldilocks::copy(params.pols[44035 + i*17], params.pols[11 + i*16]);
     Goldilocks::Element tmp_0;
     Goldilocks::copy(tmp_0, params.pols[12 + i*16]);
     Goldilocks::Element tmp_1;
     Goldilocks::copy(tmp_1, tmp_0);
     Goldilocks::mul(params.pols[44032 + i*17], tmp_1, params.pols[44035 + i*17]);
     Goldilocks::Element tmp_2;
     Goldilocks::copy(tmp_2, params.pols[13 + ((i + 1)%1024)*16]);
     Goldilocks::Element tmp_3;
     Goldilocks::copy(tmp_3, tmp_2);
     Goldilocks::mul(params.pols[44033 + i*17], tmp_3, params.pols[44035 + i*17]);
     Goldilocks::Element tmp_4;
     Goldilocks::mul(tmp_4, params.pols[12 + i*16], params.pols[13 + ((i + 1)%1024)*16]);
     Goldilocks::Element tmp_5;
     Goldilocks::copy(tmp_5, tmp_4);
     Goldilocks::mul(params.pols[44034 + i*17], tmp_5, params.pols[44035 + i*17]);
     Goldilocks::copy(params.pols[44039 + i*17],  params.pConstPols->getElement(6,i));
     Goldilocks::Element tmp_6;
     Goldilocks::copy(tmp_6,  params.pConstPols->getElement(7,i));
     Goldilocks::Element tmp_7;
     Goldilocks::copy(tmp_7, tmp_6);
     Goldilocks::mul(params.pols[44036 + i*17], tmp_7, params.pols[44039 + i*17]);
     Goldilocks::Element tmp_8;
     Goldilocks::copy(tmp_8,  params.pConstPols->getElement(8,i));
     Goldilocks::Element tmp_9;
     Goldilocks::copy(tmp_9, tmp_8);
     Goldilocks::mul(params.pols[44037 + i*17], tmp_9, params.pols[44039 + i*17]);
     Goldilocks::Element tmp_10;
     Goldilocks::copy(tmp_10, params.pols[14 + i*16]);
     Goldilocks::Element tmp_11;
     Goldilocks::copy(tmp_11, tmp_10);
     Goldilocks::mul(params.pols[44038 + i*17], tmp_11, params.pols[44039 + i*17]);
}

void AllSteps::step1_last(StepsParams &params, uint64_t i) {
     Goldilocks::copy(params.pols[44035 + i*17], params.pols[11 + i*16]);
     Goldilocks::Element tmp_0;
     Goldilocks::copy(tmp_0, params.pols[12 + i*16]);
     Goldilocks::Element tmp_1;
     Goldilocks::copy(tmp_1, tmp_0);
     Goldilocks::mul(params.pols[44032 + i*17], tmp_1, params.pols[44035 + i*17]);
     Goldilocks::Element tmp_2;
     Goldilocks::copy(tmp_2, params.pols[13 + ((i + 1)%1024)*16]);
     Goldilocks::Element tmp_3;
     Goldilocks::copy(tmp_3, tmp_2);
     Goldilocks::mul(params.pols[44033 + i*17], tmp_3, params.pols[44035 + i*17]);
     Goldilocks::Element tmp_4;
     Goldilocks::mul(tmp_4, params.pols[12 + i*16], params.pols[13 + ((i + 1)%1024)*16]);
     Goldilocks::Element tmp_5;
     Goldilocks::copy(tmp_5, tmp_4);
     Goldilocks::mul(params.pols[44034 + i*17], tmp_5, params.pols[44035 + i*17]);
     Goldilocks::copy(params.pols[44039 + i*17],  params.pConstPols->getElement(6,i));
     Goldilocks::Element tmp_6;
     Goldilocks::copy(tmp_6,  params.pConstPols->getElement(7,i));
     Goldilocks::Element tmp_7;
     Goldilocks::copy(tmp_7, tmp_6);
     Goldilocks::mul(params.pols[44036 + i*17], tmp_7, params.pols[44039 + i*17]);
     Goldilocks::Element tmp_8;
     Goldilocks::copy(tmp_8,  params.pConstPols->getElement(8,i));
     Goldilocks::Element tmp_9;
     Goldilocks::copy(tmp_9, tmp_8);
     Goldilocks::mul(params.pols[44037 + i*17], tmp_9, params.pols[44039 + i*17]);
     Goldilocks::Element tmp_10;
     Goldilocks::copy(tmp_10, params.pols[14 + i*16]);
     Goldilocks::Element tmp_11;
     Goldilocks::copy(tmp_11, tmp_10);
     Goldilocks::mul(params.pols[44038 + i*17], tmp_11, params.pols[44039 + i*17]);
}
