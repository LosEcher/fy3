// Room: /d/huanggon/houtang.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�ƿ�����,���Ǻ���,����������������,���ϵ�ȼ�Ű˸����ֵ���
ɫ����,�����Թ��ż����ײ�����,�����л����,����ɫ�������ǽ��
�ϻγ�һ����Ӱ��,�����д��������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/guanfuzi.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"yuanzi",
]));

	setup();
	replace_program(ROOM);
}
