// Room: /d/huanggon/tianwell.c

inherit ROOM;

void create()
{
	set("short", "��ˮ����ͬ");
	set("long", @LONG
�����е�һ��С��ͬ,�߹հ��Ƶ�,Ҳ��֪�ж೤,��ͬ���ӱ�ͦ�˷�
��⽵���,���Ǹ���ͷ������,һ���Ǹ�С��¯,�ϱ��ǿڹ���һЩ����.��
һ�˰������,��ˮͰ.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/lilishi.c" : 1,
]));
	set("outdoors", "/d/huanggon");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"echangan",
  "north" : __DIR__"qingmutang",
]));

	setup();
}

int valid_leave(object me,string dir)
{
	string bh;
	object npc;

	bh=(string)me->query("banghui");
	npc=present("li lishi",this_object());
	if(( !bh || bh!="��ػ�")&& dir=="north" && objectp(npc))
	return notify_fail("����������һ���۵�����ʲô�ģ�\n");
	return ::valid_leave(me,dir);
}

