// Room: /d/lingjiu/chufang.c

inherit ROOM;

void create()
{
	set("short", "ź���");
	set("long", @LONG
���Ǽ������ Ũ���ķ�����ζһ�����������ı��ӣ� ��·�����
�����������������������ܲ�֪��Դ�� ԭ������Ķ������֡�
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 4 */
  "/daemon/class/lingjiu/tbcheng.c" : 1,
  __DIR__"obj/gao" : 2,
  __DIR__"obj/suanmei" : 2,
]));
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"changl6",
]));

	setup();
	replace_program(ROOM);
}
