
inherit ROOM;
int do_out(string arg);

void create()
{
set("short","�����");
        set("long",
"������ʯ�ſ�������׳,������������ͻ��������ʯ��.���µ�ˮ����
�����,����ȥ��Щ����,��˵ʱ�������ڴ�����(out),ǰ�治Զ���ǻʹ�
������,�ϱ�ͨ���찲��.\n");
        set("outdoors", "city2");
        set("exits", ([
                "north" : __DIR__"zhengmen",
                "south" : __DIR__"tian_anm",
"westdown":__DIR__"bridge2",
"eastdown":__DIR__"bridge3",
        ]));
	set("no_clean_up", 0);
        setup();
}

void init()
{
	add_action("do_out", "out");
}

int do_out(string arg)
{
	object me;
	int i, ging_cost, qi_cost;

	me = this_player();
	i = (int)me->query_skill("dodge", 1) + random(50);
	ging_cost = 300 / (int)me->query("int");
	qi_cost = 300 / (int)me->query("int");
	if(((int)me->query("gin") < ging_cost) || ((int)me->query("kee") < qi_cost))
		i = 0;

	message_vision("$N����ʯ����һ������������ȥ��\n", me);
	if ( i < 75)
		{
	        message_vision("һ��Ǳ�����̰�$N��û�ˡ�\n", me);
		me->die();
	        }
	else if( i < 100)
		{
	        message_vision("һ��Ǳ�����̰�$N��û�ˡ�\n", me);
		me->unconcious();
		switch( random(2) ) {
		case 0:
		me->move(__DIR__"bridge2");
			break;
		case 1:
		me->move(__DIR__"bridge3");
			break;
		message_vision("һ��Ǳ����$N��ذ��ߡ�\n", me);
		}
	        }
	else {
		switch( random(5) ) {
		case 0:
		message_vision("һ��Ǳ����$N��ذ��ߡ�\n", me);
		me->move(__DIR__"bridge2");
			break;
		case 1:
		message_vision("һ��Ǳ����$N��ذ��ߡ�\n", me);
		me->move(__DIR__"bridge3");
			break;
		case 2:
		case 3:
		case 4:
		message_vision("$N��ˮ�л������غ���������ͻȻ֮�䴥����һ��Ӳ�ڡ�\n", me);
		message_vision("$N����ץס�˾������ݣ����Ż������Ӳ�ھ͸�����ˮ�档\n", me);
		message_vision("$N����һ��ˮ��̧ͷһ����ԭ������һ�ھ��С�\n", me);
         	me->move("/d/huanggon/inwell");
		break;
		}
		if( (i > 125) && me->querk_skill("dodge",1)<101)
			me->improve_skill("dodge", 2*(int)me->query_skill("dodge", 1));
		me->receive_damage("gin", ging_cost );
		me->receive_damage("kee", qi_cost );
	     }
	return 1;
}
