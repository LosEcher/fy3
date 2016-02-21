// xiaofan.c
inherit NPC;
inherit F_VENDOR;

void create()
{
	set_name("С��",({"xiao fan","xiao","fan"}));
	set("gender", "����" );
	set("age", 22);
	set("long",
		"�ؽֽ�����С����æ�Ĳ����ֺ���\n");
	set("chat_chance",15);
	set("chat_msg",	({
		"С��˵�����������в��ٺö�����ٯҪ���--����\n",
		"С���ͳ�ë����˲���ͷ�ĺ�ˮ��\n",
		(: random_move :)
	}));
	set_temp("apply/attack",5);
	set_temp("apply/defense",10);
	set("suzhou",1);
	set("combat_exp",300);
	set("attitude", "friendly");
	set("vendor_goods", ([
		"����" : __DIR__"obj/baozi",
		"����" : __DIR__"obj/jitui",
		"�ƺ�" : __DIR__"obj/jiuhu",
	]) );
	setup();
}

void init()
{	
	::init();
	add_action("do_vendor_list", "list");
}

