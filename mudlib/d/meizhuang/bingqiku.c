// Room: /d/wudu/wuku.c

inherit ROOM;

int mount,dao,shouzhang,zhang,ding,jian;
string* w_dao=({
	"mudao",
	"zhudao",
	"tiedao",
	"gangdao",
});
string* w_zhang=({
	"muzhang",
	"zhuzhang",
	"tiezhang",
	"gangzhang",
});
string* w_ding=({
	"muding",
	"zhuding",
	"tieding",
	"gangding",
});
string* w_jian=({
	"mujian",
	"zhujian",
	"tiejian",
	"gangjian",
});
int mount=5;
int dao=mount;
int jian=mount;
int zhang=mount;
int ding=mount;
int jian=mount;
void create()
{
	set("short","������");
	set("long", @LONG
����һ��ʯͷ����������ȥ����쳣��û�д�����ǽ��һ���ŵı���
�ܣ���ɫ�����ı��������õ�ѩ�����ڷŵ��������룬ͨ��÷ׯ�����Ƕ�
��������ȡ�Լ����ֵ�������������ȿ���(list)��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north":__DIR__"shibanlu3",
]));

	setup();
}
void init()
{
	add_action("do_list", "list");
	add_action("do_qu", "qu");
}

int do_list(object me)
{
    write("�������������������:\n" +
	"��(dao)����"+dao+"��\n"+
	"��(jian)����"+jian+"��\n"+
	"��(ding)����"+ding+"��ö\n"+
	"��(zhang)����"+zhang+"��\n"+
	"÷ׯ���ӿ����ڴ�ȡ(qu)�����������Ȼ�������Ƶģ�Ҫ��ð���\n");
	return 1;
}	

int do_qu(string weapon)
{
	object me,ob1;
	me=this_player();

	if(me->query("family/family_name")!="��ɽ÷ׯ")
	return notify_fail("�˴�����ֻ�ṩ����ׯ���ӣ�\n");

	if (me->query_temp("can't_qu")==0){
	if(weapon=="dao")	{

	if(dao<1) return notify_fail("����������û�е�����ѡ��İɡ�\n");

	ob1=new(__DIR__"npc/obj/"+w_dao[random(4)]);
	ob1->set("no_sell",1);
	ob1->set("no_get",1);
	ob1->set("no_give",1);
	        ob1->move(me);
	        me->set_temp("can't_qu",1);
	        dao=dao-1;
	message_vision("$N�ӱ�������ȡ��һ��"+ob1->query("name")+"��\n",me);

			return 1;
			}


	if(weapon=="zhang")	{

		if(zhang<1)	
		return notify_fail("����������û��������ѡ��İɡ�\n");

		ob1=new(__DIR__"npc/obj/"+w_zhang[random(4)]);
		ob1->set("no_sell",1);
		ob1->set("no_give",1);
		ob1->set("no_get",1);
	        ob1->move(me);
	        me->set_temp("can't_qu",1);
		zhang--;
		message_vision("$N�ӱ�������ȡ��һ��"+ob1->query("name")+"��\n",me);

			return 1;
			}

		if(weapon=="jian")	{

		if(jian<1)
		return notify_fail("�������ϵĽ��ѱ��ù�����ѡ��İɣ�\n");

		ob1=new(__DIR__"npc/obj/"+w_jian[random(4)]);
		ob1->set("no_sell",1);
		ob1->set("no_give",1);
		ob1->set("no_get",1);
	        ob1->move(me);
	        me->set_temp("can't_qu",1);
		jian--;
		message_vision("$N�ӱ�������ȡ��һ��"+ob1->query("name")+"��\n",me);

			return 1;
			}

		if(weapon=="ding")	{

		if(ding<1)
		return notify_fail("����������û�ж����ˣ�\n");

		ob1=new(__DIR__"npc/obj/"+w_ding[random(4)]);
		ob1->set("no_sell",1);
		ob1->set("no_give",1);
		ob1->set("no_get",1);
		ob1->set_amount(100);
	        ob1->move(me);
	        me->set_temp("can't_qu",1);
		ding--;
		message_vision("$N�ӱ�������ȡ��һ��ö"+ob1->query("name")+"��\n",me);

			return 1;
			}
			
		return notify_fail("��Ҫȡʲô��\n");
	}
	return notify_fail("���Ѿ���ȡ�������ˣ����������ɣ�\n");
}
