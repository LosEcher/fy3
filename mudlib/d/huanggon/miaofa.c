// Room: /d/huanggon/miaofa.c

inherit ROOM;

void create()
{
	set("short", "�������");
	set("long", @LONG
����������ϴ�ֵ�����,��Ϊ���г��Ϸ𷨾�տ,�������ط���
��,��������������һ�����ʢ.���������������,�����Ҫѧ�𷨵�
��,���������г������.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yulin.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"sdajie",
]));

	setup();
}
int valid_leave(object ob,string dir)
{
   if (ob->query_temp("mark/����")&&dir=="east")
 ob->delete_temp("mark/����");
  return ::valid_leave(ob,dir);
}