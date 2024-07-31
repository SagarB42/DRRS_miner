#include "sha256d.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void sha256d::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_r_TDATA\" :  \"" << input_r_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_r_TVALID\" :  \"" << input_r_TVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_r_TREADY\" :  \"" << input_r_TREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_r_TKEEP\" :  \"" << input_r_TKEEP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_r_TSTRB\" :  \"" << input_r_TSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_r_TLAST\" :  \"" << input_r_TLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_r_TDATA\" :  \"" << output_r_TDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_r_TVALID\" :  \"" << output_r_TVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"output_r_TREADY\" :  \"" << output_r_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_r_TKEEP\" :  \"" << output_r_TKEEP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_r_TSTRB\" :  \"" << output_r_TSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_r_TLAST\" :  \"" << output_r_TLAST.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

