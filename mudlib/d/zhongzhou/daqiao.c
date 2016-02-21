// Room: /d/zhongzhou/daqiao.c

inherit ROOM;

void create()
{
	set("short", "���ݴ���");
	set("long", @LONG
��һ�����ƺ�ΰ�Ĵ��ţ�����û��ʯ�գ�ȫ����֪ʲô�Ķ�������
���ϣ���֪����Σ�ա����ű������������֣��������������ľ���
������վ��һλ�޺���Ŀ���������㣬��֪�ڴ�Щʲô���⡣
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south":__DIR__"dukou",
  "north":"/d/yangzhou/dukou",
]));
	set("outdoors", "zhongzhou");
	set("objects",([
		__DIR__"npc/konglaoer":1,
	]));

	setup();
}

int valid_leave(object me,string dir)
{
	string banghui;
	object ob;

	ob=present("kong laoer",this_object());
	if(!objectp(ob) || !living(ob))
		return ::valid_leave(me,dir);
	banghui=(string)me->query("banghui");
	if(me->query_temp("oldsix/can_leave"))  {
                me->delete_temp("oldsix/can_leave");
                return ::valid_leave(me,dir);
	}
	if(banghui && banghui==(string)ob->query("banghui"))
		return ::valid_leave(me,dir);
	if(dir!="north")	return ::valid_leave(me,dir);
	return notify_fail("���϶�������ͷ����Ҫ�����ȸ�(pay)����������\n");
}


