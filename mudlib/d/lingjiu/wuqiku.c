// Room: /d/lingjiu/wuqiku.c

inherit ROOM;

void create()
{
	set("short", "ޤ����");
	set("long", @LONG
���ǡ����չ������ӵı����⣬�㻷�����ܣ�����ǽ��Ƕ���˸�ʽ��
������ϸһ����ԭ����ǽ���ھ������������֮�οٳ����ӣ����о�����
���ڡ��㲻�ɰ��ޣ����þ��µ���ͷ����
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  "/daemon/class/lingjiu/tbjun.c" : 1,
  "/d/emei/obj/zhujian" : 4,
]));
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"changl5",
]));

	setup();
	replace_program(ROOM);
}
