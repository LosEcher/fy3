// Room: /d/wudang/shijie.c

inherit ROOM;

void create()
{
	set("short", "ʯ��");
	set("long", @LONG
������һ����ʵ��ʯ���ϣ���ʱ���н���ʹ��������߹���һ�����ͱڣ�
һ�������£�̧ͷ��Լ�ɼ������������е������壬������ˮ���ȣ������Ŀ���
����
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northup" : __DIR__"xuanwumen",
  "southdown" : __DIR__"shulin1",
]));
        set("objects", ([
        __DIR__"npc/baibian" : 1]));

	setup();
	replace_program(ROOM);
}
