// Room: /d/huanggon/chaoyang.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
���г�����λ�ڳ�����֮��,��������ĵ���,��˵ʼ������������
��,�����Ѿ�������,�����еĵ��˶��ѻ���,�������ֱ�ӵ��˺���,ʣ
�µ�Ҳ����Ϊ�˻�����а,������ڴ�ѧϰ��ѧ�ĵ�.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/longhu.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"echangan1",
]));

	setup();
	replace_program(ROOM);
}
int valid_leave(object ob,string dir)
{
   if (ob->query_temp("mark/����")&&dir=="east")
 ob->delete_temp("mark/����");
  return ::valid_leave(ob,dir);
}