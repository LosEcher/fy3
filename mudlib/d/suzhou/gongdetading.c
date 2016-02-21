// Room: /d/suzhou/npc/gongdetading.c
#include <ansi.h>
inherit ROOM;
string* something=( {
	"miaofajing1",
	"miaofajing2",
	"miaofajing3",
	"miaofajing4",
	"nidao",
	"zhuding"
});
void create()
{
	set("short", "��������");
	set("long", @LONG
������һ�����Ƶ���ɲ��Լռȫ�����ķ�֮һ���ң�����֮�������м�Ϊ��
�������ܣ����ݳ����������۵ס�
LONG
	);
	set("no_clean_up", 0);
	set("objects",([
		__DIR__"obj/"+something[random(sizeof(something))] :1,
		__DIR__"obj/"+something[random(sizeof(something))] :1,
	]));
	set("outdoors","suzhou");
	setup();
}
void init()
{
	object me;
	me=this_player();
	call_out("greeting",0,me);
	add_action("do_jump","jump");
}
void greeting(object ob)
{
	int kee,eff_kee;
	if(random(ob->query_skill("dodge"))<20)	{
		message_vision("$NͻȻ����һ����������ֱˤ����ȥ��\n��ߴ��$Nˤ�˸�����ʺ��\n",ob);
		tell_room("/d/suzhou/gongdeta",ob->query("name")+"������ֱˤ��������\n��ߴ��"+ob->query("name")+"ˤ�˸�����ʺ��\n");
	eff_kee=ob->query("eff_kee");
	kee=ob->query("kee");
	eff_kee=eff_kee-10;
	kee=kee-15;
	ob->set("eff_kee",eff_kee);
	ob->set("kee",kee);
	ob->improve_skill("dodge",random(30),1);
		ob->move("/d/suzhou/gongdeta");
	if(kee<0||eff_kee<0)	{
	message("channel:rumor",YEL +"��ҥ�ԡ�"+ "ĳ�ˣ�"+ob->query("name")+"ˤ���ˡ�\n"NOR,users());
	ob->die();
	}
		return;
		}
}
int do_jump()
{	object me;
	int kee,eff_kee;
	me=this_player();
	if(random(me->query_skill("dodge"))<30)	{
		message_vision("$Nʩչ��������Ծ���¡�\n˭֪����һ�����ȣ���ߴˤ�˸�����ʺ��\n",me);
		tell_room("/d/suzhou/gongdeta",me->query("name")+"������Ծ��������\n˭֪����һ�����ȣ���ߴˤ�˸�����ʺ��\n");
	eff_kee=me->query("eff_kee");
	kee=me->query("kee");
	eff_kee=eff_kee-10;
	kee=kee-15;
	me->set("eff_kee",eff_kee);
	me->set("kee",kee);
	me->improve_skill("dodge",random(30),1);
		me->move("/d/suzhou/gongdeta");
	if(kee<0||eff_kee<0)	{
	message("channel:rumor",YEL +"��ҥ�ԡ�"+ "ĳ�ˣ�"+me->query("name")+"ˤ���ˡ�\n"NOR,users());
	me->die();
	}
		return 1;
		}
	message_vision("$Nʩչ��������Ծ���¡�\n���ȵ�վס�ˡ�\n",me);
	tell_room("/d/suzhou/gongdeta",me->query("name")+"������Ծ��������\n���ȵ�վס�ˡ�\n");
	me->move("/d/suzhou/gongdeta");
	return 1;
}
