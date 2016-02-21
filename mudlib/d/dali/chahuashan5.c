// Room: /d/dali/chahuashan5.c

inherit ROOM;

void create()
{
	set("short", "�軨ɽ");
	set("long", @LONG
�����ڲ軨ɽ�ϣ�������������ïʢ�Ĳ軨����Ȼ����
���Ƿ�Ʒ����ż��Ҳ����һ�����Ʒ�������С�������Զ�Ǵ���
�ǵı��ţ��ϱ߲�Զ�ǳ�ǽ��
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"chahuashan2",
  "eastdown" : __DIR__"chahuashan6",
]));
	set("outdoors", "dali");
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/caichanu.c" : 1,
  __DIR__"obj/shanchahua" : 1,
]));

	setup();
	replace_program(ROOM);
}
