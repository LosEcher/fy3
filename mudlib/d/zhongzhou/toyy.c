// Room: /d/zhongzhou/toyy.c

inherit ROOM;

void create()
{
	set("short", "��ʯ·");
	set("long", @LONG
���������ݽ�Զ��·�ϼ������������ˡ���˵����Ҫ������Ұ��կ����
�����ﲻ�ɽ������������治Զ���ǡ����ݸ������ϱ�������֮·��
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : "/d/yeyangzai/nroad",
  "north" : __DIR__"nroad",
]));
set("outdoors","/d/zhongzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
