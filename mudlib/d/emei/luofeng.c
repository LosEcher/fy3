// Room: /d/emei/luofeng.c

inherit ROOM;

void create()
{
	set("short", "�ܷ�");
	set("long", @LONG
�ݻ�Ϫ����,�͵����ܷ�,����ԭ��һ�����ܷ���,�ֽ���ϱڲ�ԫ
,��˵̫ʷ�������ڴ�׫д��'��üɽ־',�ܷ嶥�ϲ��ɻ���,�������
'�ܷ�����'�Ƕ�üʮ��֮һ.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/emei");
	set("exits", ([ /* sizeof() == 1 */
  "southdown" : __DIR__"huxi",
]));
	set("objects", ([ /* sizeof() == 1 */
__DIR__"npc/wenfang.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
