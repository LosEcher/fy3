// Room: /d/suzhou/meizhuang/meizhuang.c

inherit ROOM;

void create()
{
	set("short", "÷ׯ");
	set("long", @LONG
���Ų�����һ�����Ű�ǽ�Ĵ�ׯԺ�⣬�е�������������д�š�÷ׯ��
�������֣��Ա����š��������⡱���֣������⼸��������֮��͸�Ų���
Ӣ����
LONG
	);
	set("exits",([
	"south":__DIR__"xiaolu1",
	"north":__DIR__"qingshilu1",
]));
	set("objects",([
		__DIR__"npc/zhuangding":2,
]));
	set("no_clean_up", 0);
	set("outdoors","meizhuang");
	setup();
}

int valid_leave(object me,string dir)
{
	string fam;
	object npc;

	fam=(string)me->query("family/family_name");
	npc=present("zhuang ding",this_object());

	if( fam && fam!="��ɽ÷ׯ" && dir=="north" && objectp(npc))
	return notify_fail("ׯ���ȵ��������˵Ƚ���÷ׯ��\n");
	return ::valid_leave(me,dir);
}

