// Room: /d/huanggon/shangshanjian.c

inherit ROOM;

void create()
{
	set("short", "���ż�");
	set("long", @LONG
���ż����������,ʮ��ڴ��������ͣ�����Ŷ���.һ����ζ�ڳ�
���оþò�ɢ,ʮ�������,̫����æ�ò��ɿ���,һЩ����ư�������
ľ����,����Ҫ����ϴ.
LONG
	);
	set("objects", ([ /* sizeof() == 4 */
  __DIR__"npc/obj/puercha.c" : 1,
  __DIR__"npc/obj/mixian.c" : 1,
  __DIR__"npc/obj/huotui.c" : 1,
  __DIR__"npc/obj/baiqierou.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"yuhuayuan",
]));

	setup();
	replace_program(ROOM);
}
