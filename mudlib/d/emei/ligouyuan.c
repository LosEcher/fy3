// Room: /d/emei/ligouyuan.c

inherit ROOM;

void create()
{
	set("short", "�빸԰");
	set("long", @LONG
���ó��,��ͤһ��,�ô�����'��Ϫ����',������Ȼ��û���ֺ�
����֮��,ȴ�ݶ����겻��һƬ��Ҷ,�����ʵ۶Դ˷ǳ�����,������
��԰����,���������е����֮��.
LONG
	);
set("valid_startroom",1);
	set("no_clean_up", 0);
	set("outdoors", "/u/xxy");
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"huxi",
  "west" : __DIR__"huayantin",
  "east" : __DIR__"yushulou",
  "south" : __DIR__"fohushi",
]));
	set("objects", ([ /* sizeof() == 1 */
__DIR__"npc/jia.c" : 1,
]));

	setup();
}

int valid_leave(object me,string dir)
{
	string fam;
	object npc;

	fam=(string)me->query("family/family_name");
	npc=present("jingjia shitai",environment(me));
	if( fam && fam!="������" && objectp(npc)
		&& dir=="west")
	return notify_fail("����ʦ̫һ���ְ��㵲ס�ˡ�\n");
	return ::valid_leave(me,dir);
}

