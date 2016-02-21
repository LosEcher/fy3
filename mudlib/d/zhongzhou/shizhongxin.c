// Room: /d/zhongzhou/shizhongxin.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
�������ݵ������ģ������ֵ������ﻮ����ʮ�֡��������ݾ�������
���ֵ��������ˡ�������̾���������ɫɫ���������������ϱ�һ����
�Ľֵ���һ�����Ǹո��޽��ò��ã�һ��·�������д��"�Ķ���".����
�����ֵ�Ҫ�¾�һ�㣬һ��·���ϵ����ѿ���̫�壬��ϡ���š�����·��
�����֡�
LONG
	);
	set("outdoors", "/d/zhongzhou");
	set("valid_startroom", 1);
	set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"yanlingdong",
  "south" : __DIR__"wendingnan1",
  "west" : __DIR__"yanling",
  "north" : __DIR__"wendingbei1",
]));
	set("no_sleep_room", 1);
	set("no_fight", 1);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/hfh.c" : 1,
]));
	set("no_clean_up", 0);

	setup();
        "/obj/board/renwu_board"->foo();
}
