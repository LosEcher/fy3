// Room: /d/suzhou/sizhuan.c

inherit ROOM;

void create()
{
	set("short", "˿����");
	set("long", @LONG
ӭͷ����л�ɫ�����������ƿ������������ڡ��������������ɵ�һ��С
̨¥��̨¥�϶�����λ������Ů��̨¥�����������������������ġ���������Ů
�������ã����ֵ������������������̣������ö�������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"chengbeijie1",
]));
	set("objects",([
		__DIR__"npc/miaolingnu":1,
]));
	set("no_clean_up", 0);
	set("no_fight",1);
	setup();
	replace_program(ROOM);
}
