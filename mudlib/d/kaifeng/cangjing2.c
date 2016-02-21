// Room: /d/kaifeng/cangjing2.c

inherit ROOM;

void create()
{
	set("short", "�ؾ�¥����");
	set("long", @LONG
С¥���ĸ������з���ʯ�Ұ����������տ����е�ˮ�ݣ���һ��ʱ�䣬
�����еĺ��л���ղ��ں��еķ𾭷ŵ�����ȥɹ���Է��վñ�������
�ˣ�������ɹ�𾭵�ʯͷ�ͳ�Ϊɹ��ʯ����˵�з�����
LONG
	);
	set("objects", ([ /* sizeof() == 4 */
  __DIR__"npc/obj/jing4.c" : 1,
  __DIR__"npc/obj/jing3.c" : 1,
  __DIR__"npc/obj/jing2.c" : 1,
  __DIR__"npc/obj/jing1.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"cangjing",
]));

	setup();
	replace_program(ROOM);
}
