//HSQTAN5.C

inherit ROOM;

void create()
{
	set("short", "��̶");
	set("long", @LONG
�������ٲ��µĺ�̶��ˮ���İ��ޱȣ�ˮ�б����
�ǣ������������ܣ���ֻ����������һ��һ����ʧ����
���м������ڣ�������ƺ���Щ����͸����
LONG
	);

	set("exits", ([
		"east" : __DIR__"hsqtan6",
		"west" : __DIR__"hsqtan4",
		"south" :__DIR__"hsqtan5",
		"north" :__DIR__"hsqtan5",
	]));

//	set("outdoors", "mingjiao");
	setup();
//	replace_program(ROOM);
}


void init()
{
        object me;
        int meqi,meneili,decqi,mq;
        me=this_player();
        meqi=(int)me->query("kee");
        meneili=(int)me->query("force");
        mq=(int)me->query("max_kee");
        decqi=(int)(mq/(random(4)+5+meneili/200));
        meqi=meqi-decqi;
        me->set("force",0);
        if(meqi>0) me->set("kee",meqi);
        else me->die();
}
	

