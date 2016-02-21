// Room: /d/kaifeng/tieta.c

inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
����55��.�˽�ʮ����.����˵�Ϊ�ο����£���������������������
����Ϊ��ɫ����ש���ɻ�˽����������׳���Ϊ����.�����޳�,����
��ΰ,ש�����Է���,����,�ּ�����ʮ��ͼ��,����������
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/hangzhou/npc/man.c" : 2,
]));
	set("outdoors", "/d/kaifeng");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"jieying",
  "east" : __DIR__"eroad3",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
