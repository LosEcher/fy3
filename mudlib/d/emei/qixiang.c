// Room: /d/emei/qixiang.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
���Ǹ��·��ɵľӴ�,���н�����һ������,һ����¯,��ļ�֧��
��ð����������,����һ�����µ���ɫ,�и���������ڴ���,������
����,��վ������.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"huizong",
]));
	set("objects", ([ /* sizeof() == 1 */
__DIR__"npc/feng.c" : 1,
]));
	set("valid_startroom", 1);

	setup();
	replace_program(ROOM);
}
