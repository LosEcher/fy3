inherit KZZNPC;
inherit F_VENDOR;

string query_save_file() { return DATA_DIR + "npc/��ľ��"; }
void create()
{
#include <kzznpc.h>

set("area_name","�ɶ�ľ����");
set("area_file","/d/chengdu/mujiangpu.c");
set("long","���Ǹ����ո߳���ľ������˵����Ϊ�������¡�\n");
set("inquiry", ([
                "name": "С�����ţ��ڳɶ�Ҳ��һ���������ˡ�",
                "ľ��": "˵��ľ����ǿ��Ǵ�����о��ĳɹ�Ŷ��",
                "������": "��....�Ұ���������뱲�ӣ�����.......",
           ]));
set("vendor_goods", ([
         "ľ��":"/d/obj/weapon/sword/mujian",
       ]));
	set("age",35);
setup();
}
void init()
{
::init();
add_action("do_vendor_list","list");
}
