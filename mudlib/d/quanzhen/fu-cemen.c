// Room: /d/quanzhen/fu-cemen.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
	������һ��С�ţ������������½�����������޽��ġ�����Ȼ
С���������ε���ģ����������Ƕ��������ͭ�����������ǹ���������
���űߣ�һ�������˽����͡����������ҷ͡������ž��ǳ�������Ͻ�
�ˣ����ź��Ǹ��ҵ�СԺ��
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wolfdog" : 2,
]));
	set("outdoors", "/d/quanzhen");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"fu-xiaoyuan",
  "northwest" : __DIR__"nanjie",
]));

	setup();
	replace_program(ROOM);
}
