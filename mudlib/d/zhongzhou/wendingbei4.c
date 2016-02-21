// Room: /d/zhongzhou/wendingbei4.c

inherit ROOM;

void create()
{
	set("short", "�Ķ�����");
	set("long", @LONG
�������ݳ��Ķ����֣����������ݱ������Ѳ�Զ��������������
û������Ӱ���ֵ��Ķ�����һ����լ��Ժ���ſڹ��ŵ����Ϻ�Ȼ����
[1;31m��Хɽׯ[2;37;0m�ĸ����֡�������һ������ƽ����
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"wendingbei3",
  "east" : __DIR__"huiguojv",
  "west" : __DIR__"congwu",
  "north" : __DIR__"beimen",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/zhongzhou");
	set("objects", ([ /* sizeof() == 1 */
  "/d/baituo/npc/ouyangke" : 1,
]));

	setup();
	replace_program(ROOM);
}
