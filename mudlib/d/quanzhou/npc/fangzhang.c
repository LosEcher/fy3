inherit KZZNPC;
#include <ansi.h>

string query_save_file() { return DATA_DIR + "npc/�������"; }
void create()
{
#include <kzznpc.h>

	set("area_name","Ȫ�ݿ�Ԫ��");
	set("area_file","/d/quanzhou/daxiong.c");
	set("ziyuan","����");
	set("jizhi",15);
	set("kaifa",50);

	set("chat_chance", 10);
        set("chat_msg", ({
                "��λʩ��լ���ʴ�,���벼ʩһ��!\n",
                "ɫ���ǿ�,�ռ���ɫ,����٢��!\n",
                             "��˵:�Ҳ������,˭�����!���˴��Ǵ��.\n",
                             "�����Խ�������,�������������,�����ҷ���!\n",
        }) );
        set("long", "��ѧ���侫ͨ�ķ��ɴ�ʦ.��\n");
        setup();
        
carry_object("/obj/armor/jiasha")->wear();
add_money("silver",10);
}
int accept_object(object who,object item)
{
  command("nod");
   command("say ������,������,��л��λʩ��!\n");
	if((string)item->query("money_id"))
		"/cmds/adm/ctom.c"->save_money(this_object(),(int)item->value());

   return 1;
}
#include <die.h>