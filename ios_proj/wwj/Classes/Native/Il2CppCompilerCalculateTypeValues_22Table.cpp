#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_HttpResCommand3283050857.h"
#include "AssemblyU2DCSharp_SocketCommand2127949346.h"
#include "AssemblyU2DCSharp_StartUpCommand688340602.h"
#include "AssemblyU2DCSharp_UserCommand2016101392.h"
#include "AssemblyU2DCSharp_UserCommand_CoinUpdate3779280949.h"
#include "AssemblyU2DCSharp_UserCommand_MachineUpdate513009739.h"
#include "AssemblyU2DCSharp_AppConst3406236046.h"
#include "AssemblyU2DCSharp_LocalKey3149468266.h"
#include "AssemblyU2DCSharp_Main2809994845.h"
#include "AssemblyU2DCSharp_MediatorPlug1090563397.h"
#include "AssemblyU2DCSharp_AccountProxy3367701755.h"
#include "AssemblyU2DCSharp_Base_Req_UserInfo3817878412.h"
#include "AssemblyU2DCSharp_Base_Req_UserInfo_Response1683355314.h"
#include "AssemblyU2DCSharp_Base_Req_UserInfo_Response_Data705691545.h"
#include "AssemblyU2DCSharp_Base_Req_UserInfo_Response_Info228502075.h"
#include "AssemblyU2DCSharp_Req_GetAllPrize250951530.h"
#include "AssemblyU2DCSharp_Req_GetAllPrize_Response3715695528.h"
#include "AssemblyU2DCSharp_Req_GetAllPrize_Response_Data546082263.h"
#include "AssemblyU2DCSharp_Req_GetAllPrize_Response_Info2394491365.h"
#include "AssemblyU2DCSharp_Req_GetBaseInfo1827577742.h"
#include "AssemblyU2DCSharp_Req_GetExplainAttention721525872.h"
#include "AssemblyU2DCSharp_Req_GetExplainAttention_Response3389387610.h"
#include "AssemblyU2DCSharp_Req_GetExplainAttention_Response1828702727.h"
#include "AssemblyU2DCSharp_Req_GetExplainAttention_Response1532822933.h"
#include "AssemblyU2DCSharp_Req_GetMachineInfo3218704580.h"
#include "AssemblyU2DCSharp_Req_GetMachineInfo_Response3827549514.h"
#include "AssemblyU2DCSharp_Req_GetMachineInfo_Response_Data266915901.h"
#include "AssemblyU2DCSharp_Req_GetMachineInfo_Response_Info2975596095.h"
#include "AssemblyU2DCSharp_Req_GetMachineInfo_Response_Mach1990010804.h"
#include "AssemblyU2DCSharp_Req_GetMachinePrizeBallData2586177075.h"
#include "AssemblyU2DCSharp_Req_GetMachinePrizeBallData_Respo231228995.h"
#include "AssemblyU2DCSharp_Req_GetMachinePrizeBallData_Respo392954118.h"
#include "AssemblyU2DCSharp_Req_GetMachinePrizeBallData_Resp1938835626.h"
#include "AssemblyU2DCSharp_Req_GetMachinePrizeInfo784911668.h"
#include "AssemblyU2DCSharp_Req_GetMachinePrizeInfo_Response3930883938.h"
#include "AssemblyU2DCSharp_Req_GetMachinePrizeInfo_Response_D83466333.h"
#include "AssemblyU2DCSharp_Req_GetMachinePrizeInfo_Response_446344683.h"
#include "AssemblyU2DCSharp_Req_GetNewsLists2838141971.h"
#include "AssemblyU2DCSharp_Req_GetNewsLists_Response3647484083.h"
#include "AssemblyU2DCSharp_Req_GetNewsLists_Response_Data428545786.h"
#include "AssemblyU2DCSharp_Req_GetNewsLists_Response_Info246977206.h"
#include "AssemblyU2DCSharp_Req_GetPrizeInfo503968863.h"
#include "AssemblyU2DCSharp_Req_GetPrizeInfo_Response1066063823.h"
#include "AssemblyU2DCSharp_Req_GetPrizeInfo_Response_Data1557559750.h"
#include "AssemblyU2DCSharp_Req_GetPrizeInfo_Response_Info2861521818.h"
#include "AssemblyU2DCSharp_Req_GetPrizeUseCoin235174161.h"
#include "AssemblyU2DCSharp_Req_GetPrizeUseCoin_Response4284099457.h"
#include "AssemblyU2DCSharp_Req_GetPrizeUseCoin_Response_Dat3152262302.h"
#include "AssemblyU2DCSharp_Req_GetPrizeUseCoin_Response_Inf3515140334.h"
#include "AssemblyU2DCSharp_Req_GetPrizeUserHorn664868319.h"
#include "AssemblyU2DCSharp_Req_GetPrizeUserHorn_Response3772993143.h"
#include "AssemblyU2DCSharp_Req_GetPrizeUserHorn_Response_Da2185002244.h"
#include "AssemblyU2DCSharp_Req_GetPrizeUserLists3850485005.h"
#include "AssemblyU2DCSharp_Req_GetPrizeUserLists_Response2934266941.h"
#include "AssemblyU2DCSharp_Req_GetPrizeUserLists_Response_D1524650276.h"
#include "AssemblyU2DCSharp_Req_GetPrizeUserLists_Response_I2653692112.h"
#include "AssemblyU2DCSharp_Req_GetUpdatePics1118469089.h"
#include "AssemblyU2DCSharp_Req_GetUpdatePics_Response2759531585.h"
#include "AssemblyU2DCSharp_Req_GetUpdatePics_Response_Data760679892.h"
#include "AssemblyU2DCSharp_Req_GetUpdatePics_Response_Info4275929356.h"
#include "AssemblyU2DCSharp_Req_GetUpdatePics_Response_Entry2933429096.h"
#include "AssemblyU2DCSharp_Req_GetUserForgetPsdVcode4197905561.h"
#include "AssemblyU2DCSharp_Req_GetUserForgetPsdVcode_Respon1445710305.h"
#include "AssemblyU2DCSharp_Req_GetUserForgetPsdVcode_Respons523521196.h"
#include "AssemblyU2DCSharp_Req_MachineEndGrab2382967747.h"
#include "AssemblyU2DCSharp_Req_MachineEndGrab_Response212491691.h"
#include "AssemblyU2DCSharp_Req_MachineEndGrab_Response_Data1063157950.h"
#include "AssemblyU2DCSharp_Req_MachineEndGrab_Response_Info3771838238.h"
#include "AssemblyU2DCSharp_Req_MachineStartGrab3485909748.h"
#include "AssemblyU2DCSharp_Req_MachineStartGrab_Response3053143294.h"
#include "AssemblyU2DCSharp_Req_MachineStartGrab_Response_Da4074147771.h"
#include "AssemblyU2DCSharp_Req_MachineStartGrab_Response_In4174904501.h"
#include "AssemblyU2DCSharp_Req_RegisterVcode1322481501.h"
#include "AssemblyU2DCSharp_Req_RegisterVcode_Response2628246429.h"
#include "AssemblyU2DCSharp_Req_RegisterVcode_Response_Data3452493908.h"
#include "AssemblyU2DCSharp_Req_UsePrize3632642040.h"
#include "AssemblyU2DCSharp_Req_UsePrize_Response2813544250.h"
#include "AssemblyU2DCSharp_Req_UsePrize_Response_Data762886835.h"
#include "AssemblyU2DCSharp_Req_UserForgetPsdSendMsg1014197417.h"
#include "AssemblyU2DCSharp_Req_UserForgetPsdSendMsg_Respons1073513569.h"
#include "AssemblyU2DCSharp_Req_UserForgetPsdSendMsg_Response503888270.h"
#include "AssemblyU2DCSharp_Req_UserForgetPsdSendMsg_Respons1942364742.h"
#include "AssemblyU2DCSharp_Req_UserLogin496922837.h"
#include "AssemblyU2DCSharp_Req_UserLogout3015962468.h"
#include "AssemblyU2DCSharp_Req_UserLogout_Response165664278.h"
#include "AssemblyU2DCSharp_Req_UserLogout_Response_Data2083464491.h"
#include "AssemblyU2DCSharp_Req_UserRecharge3565060991.h"
#include "AssemblyU2DCSharp_Req_UserRecharge_Response4250180471.h"
#include "AssemblyU2DCSharp_Req_UserRecharge_Response_Data80454200.h"
#include "AssemblyU2DCSharp_Req_UserRegister3135438179.h"
#include "AssemblyU2DCSharp_Req_UserRegister_Response2045565979.h"
#include "AssemblyU2DCSharp_Req_UserRegister_Response_Data463239420.h"
#include "AssemblyU2DCSharp_Req_UserRegisterSendMsg485842282.h"
#include "AssemblyU2DCSharp_Req_UserRegisterSendMsg_Response1370037692.h"
#include "AssemblyU2DCSharp_Req_UserRegisterSendMsg_Response2639504221.h"
#include "AssemblyU2DCSharp_Req_UserResetPsd1439768748.h"
#include "AssemblyU2DCSharp_Req_UserResetPsd_Response4197083710.h"
#include "AssemblyU2DCSharp_Req_UserResetPsd_Response_Data2228534131.h"
#include "AssemblyU2DCSharp_Req_UserResetPsd_Response_Info2329290581.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2200 = { sizeof (HttpResCommand_t3283050857), -1, sizeof(HttpResCommand_t3283050857_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2200[1] = 
{
	HttpResCommand_t3283050857_StaticFields::get_offset_of_HTTP_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2201 = { sizeof (SocketCommand_t2127949346), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2202 = { sizeof (StartUpCommand_t688340602), -1, sizeof(StartUpCommand_t688340602_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2202[5] = 
{
	StartUpCommand_t688340602_StaticFields::get_offset_of_STARTUP_2(),
	StartUpCommand_t688340602_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_3(),
	StartUpCommand_t688340602_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_4(),
	StartUpCommand_t688340602_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_5(),
	StartUpCommand_t688340602_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2203 = { sizeof (UserCommand_t2016101392), -1, sizeof(UserCommand_t2016101392_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2203[1] = 
{
	UserCommand_t2016101392_StaticFields::get_offset_of_COMMAND_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2204 = { sizeof (CoinUpdate_t3779280949), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2204[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2205 = { sizeof (MachineUpdate_t513009739), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2205[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2206 = { sizeof (AppConst_t3406236046), -1, sizeof(AppConst_t3406236046_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2206[10] = 
{
	AppConst_t3406236046_StaticFields::get_offset_of_SocketAddress_0(),
	AppConst_t3406236046_StaticFields::get_offset_of_SocketPort_1(),
	AppConst_t3406236046_StaticFields::get_offset_of_UUID_2(),
	AppConst_t3406236046_StaticFields::get_offset_of_ANDROID_APPID_3(),
	AppConst_t3406236046_StaticFields::get_offset_of_ANDROID_APPSECRET_4(),
	AppConst_t3406236046_StaticFields::get_offset_of_ANDROID_INTERFACE_CLASS_5(),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2207 = { sizeof (LocalKey_t3149468266), -1, sizeof(LocalKey_t3149468266_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2207[2] = 
{
	LocalKey_t3149468266_StaticFields::get_offset_of_TOKEN_0(),
	LocalKey_t3149468266_StaticFields::get_offset_of_USERID_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2208 = { sizeof (Main_t2809994845), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2209 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2210 = { sizeof (MediatorPlug_t1090563397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2210[2] = 
{
	MediatorPlug_t1090563397::get_offset_of_mediatorName_2(),
	MediatorPlug_t1090563397::get_offset_of_mediatorClassRef_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2211 = { sizeof (AccountProxy_t3367701755), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2211[11] = 
{
	0,
	AccountProxy_t3367701755::get_offset_of_id_7(),
	AccountProxy_t3367701755::get_offset_of_type_8(),
	AccountProxy_t3367701755::get_offset_of_name_9(),
	AccountProxy_t3367701755::get_offset_of_phone_10(),
	AccountProxy_t3367701755::get_offset_of_nickname_11(),
	AccountProxy_t3367701755::get_offset_of_pic_12(),
	AccountProxy_t3367701755::get_offset_of_wxid_13(),
	AccountProxy_t3367701755::get_offset_of_coin_14(),
	AccountProxy_t3367701755::get_offset_of_uuid_15(),
	AccountProxy_t3367701755::get_offset_of_token_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2212 = { sizeof (Base_Req_UserInfo_t3817878412), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2212[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2213 = { sizeof (Response_t1683355314), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2213[1] = 
{
	Response_t1683355314::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2214 = { sizeof (Data_t705691545), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2214[3] = 
{
	Data_t705691545::get_offset_of_code_0(),
	Data_t705691545::get_offset_of_msg_1(),
	Data_t705691545::get_offset_of_info_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2215 = { sizeof (Info_t228502075), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2215[10] = 
{
	Info_t228502075::get_offset_of_id_0(),
	Info_t228502075::get_offset_of_type_1(),
	Info_t228502075::get_offset_of_name_2(),
	Info_t228502075::get_offset_of_phone_3(),
	Info_t228502075::get_offset_of_nickname_4(),
	Info_t228502075::get_offset_of_pic_5(),
	Info_t228502075::get_offset_of_wxid_6(),
	Info_t228502075::get_offset_of_coin_7(),
	Info_t228502075::get_offset_of_uuid_8(),
	Info_t228502075::get_offset_of_token_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2216 = { sizeof (Req_GetAllPrize_t250951530), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2216[2] = 
{
	0,
	Req_GetAllPrize_t250951530::get_offset_of__api_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2217 = { sizeof (Response_t3715695528), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2217[1] = 
{
	Response_t3715695528::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2218 = { sizeof (Data_t546082263), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2218[3] = 
{
	Data_t546082263::get_offset_of_code_0(),
	Data_t546082263::get_offset_of_info_1(),
	Data_t546082263::get_offset_of_msg_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2219 = { sizeof (Info_t2394491365), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2219[6] = 
{
	Info_t2394491365::get_offset_of_id_0(),
	Info_t2394491365::get_offset_of_name_1(),
	Info_t2394491365::get_offset_of_price_2(),
	Info_t2394491365::get_offset_of_coin_3(),
	Info_t2394491365::get_offset_of_pic_4(),
	Info_t2394491365::get_offset_of_desc_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2220 = { sizeof (Req_GetBaseInfo_t1827577742), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2220[5] = 
{
	0,
	Req_GetBaseInfo_t1827577742::get_offset_of__api_13(),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2221 = { sizeof (Req_GetExplainAttention_t721525872), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2221[2] = 
{
	0,
	Req_GetExplainAttention_t721525872::get_offset_of__api_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2222 = { sizeof (Response_t3389387610), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2222[1] = 
{
	Response_t3389387610::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2223 = { sizeof (Data_t1828702727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2223[2] = 
{
	Data_t1828702727::get_offset_of_code_0(),
	Data_t1828702727::get_offset_of_info_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2224 = { sizeof (Info_t1532822933), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2224[2] = 
{
	Info_t1532822933::get_offset_of_explain_0(),
	Info_t1532822933::get_offset_of_attention_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2225 = { sizeof (Req_GetMachineInfo_t3218704580), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2225[2] = 
{
	0,
	Req_GetMachineInfo_t3218704580::get_offset_of__api_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2226 = { sizeof (Response_t3827549514), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2226[1] = 
{
	Response_t3827549514::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2227 = { sizeof (Data_t266915901), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2227[3] = 
{
	Data_t266915901::get_offset_of_code_0(),
	Data_t266915901::get_offset_of_info_1(),
	Data_t266915901::get_offset_of_msg_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2228 = { sizeof (Info_t2975596095), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2228[3] = 
{
	Info_t2975596095::get_offset_of_name_0(),
	Info_t2975596095::get_offset_of_machine_type_id_1(),
	Info_t2975596095::get_offset_of_machine_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2229 = { sizeof (Machine_t1990010804), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2229[2] = 
{
	Machine_t1990010804::get_offset_of_coin_0(),
	Machine_t1990010804::get_offset_of_machine_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2230 = { sizeof (Req_GetMachinePrizeBallData_t2586177075), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2230[2] = 
{
	0,
	Req_GetMachinePrizeBallData_t2586177075::get_offset_of__api_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2231 = { sizeof (Response_t231228995), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2231[1] = 
{
	Response_t231228995::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2232 = { sizeof (Data_t392954118), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2232[3] = 
{
	Data_t392954118::get_offset_of_code_0(),
	Data_t392954118::get_offset_of_info_1(),
	Data_t392954118::get_offset_of_msg_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2233 = { sizeof (Info_t1938835626), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2233[10] = 
{
	Info_t1938835626::get_offset_of_prize_id_0(),
	Info_t1938835626::get_offset_of_ball_id_1(),
	Info_t1938835626::get_offset_of_name_2(),
	Info_t1938835626::get_offset_of_price_3(),
	Info_t1938835626::get_offset_of_coin_4(),
	Info_t1938835626::get_offset_of_p_pic_5(),
	Info_t1938835626::get_offset_of_b_pic_6(),
	Info_t1938835626::get_offset_of_is_matter_7(),
	Info_t1938835626::get_offset_of_ball_num_8(),
	Info_t1938835626::get_offset_of_refresh_time_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2234 = { sizeof (Req_GetMachinePrizeInfo_t784911668), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2234[3] = 
{
	0,
	Req_GetMachinePrizeInfo_t784911668::get_offset_of__api_8(),
	Req_GetMachinePrizeInfo_t784911668::get_offset_of_mtId_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2235 = { sizeof (Response_t3930883938), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2235[1] = 
{
	Response_t3930883938::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2236 = { sizeof (Data_t83466333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2236[3] = 
{
	Data_t83466333::get_offset_of_code_0(),
	Data_t83466333::get_offset_of_info_1(),
	Data_t83466333::get_offset_of_msg_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2237 = { sizeof (Info_t446344683), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2237[9] = 
{
	Info_t446344683::get_offset_of_machine_type_id_0(),
	Info_t446344683::get_offset_of_machine_id_1(),
	Info_t446344683::get_offset_of_prize_id_2(),
	Info_t446344683::get_offset_of_ball_id_3(),
	Info_t446344683::get_offset_of_name_4(),
	Info_t446344683::get_offset_of_price_5(),
	Info_t446344683::get_offset_of_coin_6(),
	Info_t446344683::get_offset_of_p_pic_7(),
	Info_t446344683::get_offset_of_b_pic_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2238 = { sizeof (Req_GetNewsLists_t2838141971), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2238[2] = 
{
	0,
	Req_GetNewsLists_t2838141971::get_offset_of__api_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2239 = { sizeof (Response_t3647484083), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2239[1] = 
{
	Response_t3647484083::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2240 = { sizeof (Data_t428545786), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2240[3] = 
{
	Data_t428545786::get_offset_of_code_0(),
	Data_t428545786::get_offset_of_info_1(),
	Data_t428545786::get_offset_of_msg_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2241 = { sizeof (Info_t246977206), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2241[5] = 
{
	Info_t246977206::get_offset_of_id_0(),
	Info_t246977206::get_offset_of_type_title_1(),
	Info_t246977206::get_offset_of_title_2(),
	Info_t246977206::get_offset_of_cont_3(),
	Info_t246977206::get_offset_of_date_time_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2242 = { sizeof (Req_GetPrizeInfo_t503968863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2242[2] = 
{
	0,
	Req_GetPrizeInfo_t503968863::get_offset_of__api_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2243 = { sizeof (Response_t1066063823), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2243[1] = 
{
	Response_t1066063823::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2244 = { sizeof (Data_t1557559750), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2244[3] = 
{
	Data_t1557559750::get_offset_of_code_0(),
	Data_t1557559750::get_offset_of_info_1(),
	Data_t1557559750::get_offset_of_msg_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2245 = { sizeof (Info_t2861521818), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2245[8] = 
{
	Info_t2861521818::get_offset_of_id_0(),
	Info_t2861521818::get_offset_of_prize_id_1(),
	Info_t2861521818::get_offset_of_name_2(),
	Info_t2861521818::get_offset_of_price_3(),
	Info_t2861521818::get_offset_of_coin_4(),
	Info_t2861521818::get_offset_of_pic_5(),
	Info_t2861521818::get_offset_of_desc_6(),
	Info_t2861521818::get_offset_of_status_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2246 = { sizeof (Req_GetPrizeUseCoin_t235174161), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2246[6] = 
{
	0,
	Req_GetPrizeUseCoin_t235174161::get_offset_of__api_8(),
	0,
	0,
	0,
	Req_GetPrizeUseCoin_t235174161::get_offset_of_prizeId_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2247 = { sizeof (Response_t4284099457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2247[1] = 
{
	Response_t4284099457::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2248 = { sizeof (Data_t3152262302), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2248[3] = 
{
	Data_t3152262302::get_offset_of_code_0(),
	Data_t3152262302::get_offset_of_info_1(),
	Data_t3152262302::get_offset_of_msg_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2249 = { sizeof (Info_t3515140334), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2249[1] = 
{
	Info_t3515140334::get_offset_of_prize_coin_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2250 = { sizeof (Req_GetPrizeUserHorn_t664868319), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2250[3] = 
{
	0,
	Req_GetPrizeUserHorn_t664868319::get_offset_of__api_8(),
	Req_GetPrizeUserHorn_t664868319::get_offset_of_mtId_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2251 = { sizeof (Response_t3772993143), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2251[1] = 
{
	Response_t3772993143::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2252 = { sizeof (Data_t2185002244), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2252[3] = 
{
	Data_t2185002244::get_offset_of_code_0(),
	Data_t2185002244::get_offset_of_info_1(),
	Data_t2185002244::get_offset_of_msg_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2253 = { sizeof (Req_GetPrizeUserLists_t3850485005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2253[3] = 
{
	0,
	Req_GetPrizeUserLists_t3850485005::get_offset_of__api_8(),
	Req_GetPrizeUserLists_t3850485005::get_offset_of_mtId_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2254 = { sizeof (Response_t2934266941), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2254[1] = 
{
	Response_t2934266941::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2255 = { sizeof (Data_t1524650276), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2255[3] = 
{
	Data_t1524650276::get_offset_of_code_0(),
	Data_t1524650276::get_offset_of_info_1(),
	Data_t1524650276::get_offset_of_msg_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2256 = { sizeof (Info_t2653692112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2256[7] = 
{
	Info_t2653692112::get_offset_of_user_id_0(),
	Info_t2653692112::get_offset_of_pic_1(),
	Info_t2653692112::get_offset_of_phone_2(),
	Info_t2653692112::get_offset_of_type_3(),
	Info_t2653692112::get_offset_of_user_name_4(),
	Info_t2653692112::get_offset_of_prize_id_5(),
	Info_t2653692112::get_offset_of_name_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2257 = { sizeof (Req_GetUpdatePics_t1118469089), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2257[5] = 
{
	0,
	0,
	0,
	Req_GetUpdatePics_t1118469089::get_offset_of__api_10(),
	Req_GetUpdatePics_t1118469089::get_offset_of_version_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2258 = { sizeof (Response_t2759531585), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2258[1] = 
{
	Response_t2759531585::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2259 = { sizeof (Data_t760679892), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2259[3] = 
{
	Data_t760679892::get_offset_of_code_0(),
	Data_t760679892::get_offset_of_info_1(),
	Data_t760679892::get_offset_of_msg_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2260 = { sizeof (Info_t4275929356), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2260[3] = 
{
	Info_t4275929356::get_offset_of_prize_0(),
	Info_t4275929356::get_offset_of_ball_1(),
	Info_t4275929356::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2261 = { sizeof (Entry_t2933429096), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2261[3] = 
{
	Entry_t2933429096::get_offset_of_id_0(),
	Entry_t2933429096::get_offset_of_pic_1(),
	Entry_t2933429096::get_offset_of_pic_path_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2262 = { sizeof (Req_GetUserForgetPsdVcode_t4197905561), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2262[2] = 
{
	0,
	Req_GetUserForgetPsdVcode_t4197905561::get_offset_of__api_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2263 = { sizeof (Response_t1445710305), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2263[1] = 
{
	Response_t1445710305::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2264 = { sizeof (Data_t523521196), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2264[3] = 
{
	Data_t523521196::get_offset_of_code_0(),
	Data_t523521196::get_offset_of_msg_1(),
	Data_t523521196::get_offset_of_info_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2265 = { sizeof (Req_MachineEndGrab_t2382967747), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2265[6] = 
{
	0,
	Req_MachineEndGrab_t2382967747::get_offset_of__api_8(),
	0,
	0,
	Req_MachineEndGrab_t2382967747::get_offset_of_logId_11(),
	Req_MachineEndGrab_t2382967747::get_offset_of_ballIdStr_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2266 = { sizeof (Response_t212491691), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2266[1] = 
{
	Response_t212491691::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2267 = { sizeof (Data_t1063157950), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2267[3] = 
{
	Data_t1063157950::get_offset_of_code_0(),
	Data_t1063157950::get_offset_of_info_1(),
	Data_t1063157950::get_offset_of_msg_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2268 = { sizeof (Info_t3771838238), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2268[3] = 
{
	Info_t3771838238::get_offset_of_coin_0(),
	Info_t3771838238::get_offset_of_ball_arr_1(),
	Info_t3771838238::get_offset_of_user_prize_log_id_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2269 = { sizeof (Req_MachineStartGrab_t3485909748), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2269[4] = 
{
	0,
	Req_MachineStartGrab_t3485909748::get_offset_of__api_8(),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2270 = { sizeof (Response_t3053143294), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2270[1] = 
{
	Response_t3053143294::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2271 = { sizeof (Data_t4074147771), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2271[3] = 
{
	Data_t4074147771::get_offset_of_code_0(),
	Data_t4074147771::get_offset_of_info_1(),
	Data_t4074147771::get_offset_of_msg_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2272 = { sizeof (Info_t4174904501), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2272[2] = 
{
	Info_t4174904501::get_offset_of_game_id_0(),
	Info_t4174904501::get_offset_of_ball_arr_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2273 = { sizeof (Req_RegisterVcode_t1322481501), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2273[2] = 
{
	0,
	Req_RegisterVcode_t1322481501::get_offset_of__api_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2274 = { sizeof (Response_t2628246429), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2274[1] = 
{
	Response_t2628246429::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2275 = { sizeof (Data_t3452493908), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2275[3] = 
{
	Data_t3452493908::get_offset_of_code_0(),
	Data_t3452493908::get_offset_of_msg_1(),
	Data_t3452493908::get_offset_of_info_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2276 = { sizeof (Req_UsePrize_t3632642040), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2276[14] = 
{
	0,
	Req_UsePrize_t3632642040::get_offset_of__api_8(),
	Req_UsePrize_t3632642040::get_offset_of_prizeId_9(),
	Req_UsePrize_t3632642040::get_offset_of_userPrizeId_10(),
	Req_UsePrize_t3632642040::get_offset_of_usePrizeType_11(),
	Req_UsePrize_t3632642040::get_offset_of_userName_12(),
	Req_UsePrize_t3632642040::get_offset_of_userAddr_13(),
	Req_UsePrize_t3632642040::get_offset_of_userPhone_14(),
	Req_UsePrize_t3632642040::get_offset_of_buyBackType_15(),
	Req_UsePrize_t3632642040::get_offset_of_buyBackName_16(),
	Req_UsePrize_t3632642040::get_offset_of_buyBackPhone_17(),
	Req_UsePrize_t3632642040::get_offset_of_buyBackAli_18(),
	Req_UsePrize_t3632642040::get_offset_of_buyBackBank_19(),
	Req_UsePrize_t3632642040::get_offset_of_buyBackCard_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2277 = { sizeof (Response_t2813544250), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2277[1] = 
{
	Response_t2813544250::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2278 = { sizeof (Data_t762886835), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2278[1] = 
{
	Data_t762886835::get_offset_of_code_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2279 = { sizeof (Req_UserForgetPsdSendMsg_t1014197417), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2279[4] = 
{
	0,
	Req_UserForgetPsdSendMsg_t1014197417::get_offset_of__api_8(),
	Req_UserForgetPsdSendMsg_t1014197417::get_offset_of_phone_9(),
	Req_UserForgetPsdSendMsg_t1014197417::get_offset_of_verCode_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2280 = { sizeof (Response_t1073513569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2280[1] = 
{
	Response_t1073513569::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2281 = { sizeof (Data_t503888270), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2281[2] = 
{
	Data_t503888270::get_offset_of_code_0(),
	Data_t503888270::get_offset_of_msg_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2282 = { sizeof (List_t1942364742), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2283 = { sizeof (Req_UserLogin_t496922837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2283[7] = 
{
	0,
	Req_UserLogin_t496922837::get_offset_of__api_13(),
	Req_UserLogin_t496922837::get_offset_of_phone_14(),
	Req_UserLogin_t496922837::get_offset_of_psd_15(),
	Req_UserLogin_t496922837::get_offset_of_uuid_16(),
	Req_UserLogin_t496922837::get_offset_of_wxid_17(),
	Req_UserLogin_t496922837::get_offset_of_type_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2284 = { sizeof (Req_UserLogout_t3015962468), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2284[2] = 
{
	0,
	Req_UserLogout_t3015962468::get_offset_of__api_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2285 = { sizeof (Response_t165664278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2285[1] = 
{
	Response_t165664278::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2286 = { sizeof (Data_t2083464491), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2286[2] = 
{
	Data_t2083464491::get_offset_of_code_0(),
	Data_t2083464491::get_offset_of_msg_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2287 = { sizeof (Req_UserRecharge_t3565060991), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2287[3] = 
{
	0,
	Req_UserRecharge_t3565060991::get_offset_of__api_8(),
	Req_UserRecharge_t3565060991::get_offset_of_amount_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2288 = { sizeof (Response_t4250180471), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2288[1] = 
{
	Response_t4250180471::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2289 = { sizeof (Data_t80454200), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2289[2] = 
{
	Data_t80454200::get_offset_of_code_0(),
	Data_t80454200::get_offset_of_msg_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2290 = { sizeof (Req_UserRegister_t3135438179), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2290[14] = 
{
	0,
	Req_UserRegister_t3135438179::get_offset_of__api_8(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	Req_UserRegister_t3135438179::get_offset_of_phone_16(),
	Req_UserRegister_t3135438179::get_offset_of_verCode_17(),
	Req_UserRegister_t3135438179::get_offset_of_msgCode_18(),
	Req_UserRegister_t3135438179::get_offset_of_psd_19(),
	Req_UserRegister_t3135438179::get_offset_of_uuid_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2291 = { sizeof (Response_t2045565979), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2291[1] = 
{
	Response_t2045565979::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2292 = { sizeof (Data_t463239420), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2292[2] = 
{
	Data_t463239420::get_offset_of_code_0(),
	Data_t463239420::get_offset_of_msg_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2293 = { sizeof (Req_UserRegisterSendMsg_t485842282), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2293[7] = 
{
	0,
	Req_UserRegisterSendMsg_t485842282::get_offset_of__api_8(),
	0,
	0,
	0,
	Req_UserRegisterSendMsg_t485842282::get_offset_of_phone_12(),
	Req_UserRegisterSendMsg_t485842282::get_offset_of_verCode_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2294 = { sizeof (Response_t1370037692), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2294[1] = 
{
	Response_t1370037692::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2295 = { sizeof (Data_t2639504221), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2295[2] = 
{
	Data_t2639504221::get_offset_of_code_0(),
	Data_t2639504221::get_offset_of_msg_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2296 = { sizeof (Req_UserResetPsd_t1439768748), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2296[14] = 
{
	0,
	Req_UserResetPsd_t1439768748::get_offset_of__api_8(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	Req_UserResetPsd_t1439768748::get_offset_of_phone_16(),
	Req_UserResetPsd_t1439768748::get_offset_of_verCode_17(),
	Req_UserResetPsd_t1439768748::get_offset_of_msgCode_18(),
	Req_UserResetPsd_t1439768748::get_offset_of_psd_19(),
	Req_UserResetPsd_t1439768748::get_offset_of_uuid_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2297 = { sizeof (Response_t4197083710), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2297[1] = 
{
	Response_t4197083710::get_offset_of_data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2298 = { sizeof (Data_t2228534131), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2298[3] = 
{
	Data_t2228534131::get_offset_of_code_0(),
	Data_t2228534131::get_offset_of_msg_1(),
	Data_t2228534131::get_offset_of_info_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2299 = { sizeof (Info_t2329290581), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
