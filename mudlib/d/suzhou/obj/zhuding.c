// Mr.music yangzhou ����

#include <weapon.h>

inherit THROWING;
void create()
{
		set_name("��",({"zhuding","ding"}));
        if( clonep() )
                set_default_object(__FILE__);
        else {
			set("long","�����ƳɵĶ��ӣ���������ǿ���ƺ��Ǹ��Ŷ���\n������������Ĳ�֪д��Щʲô��\n");
			set("unit","Щ");
			set("base_unit","ö");
			set("base_weight",5);
			set("base_value",5000);
			set("value",50000);
			set("skill",([
				"name" :"throwing",
				"exp_required":0,
				"sen_cost":20,
				"max_skill":50,
			]));
              }
		set_amount(10);
        init_throwing(5);
        setup();
}
