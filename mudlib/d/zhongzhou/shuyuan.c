// Room: /d/zhongzhou/shuyuan.c

inherit ROOM;

void create()
{
	set("short", "��Ժ");
	set("long", @LONG
�������ݳ��ϵ�һ����Ժ����˵�����Ժ������˵������ѧ������
���˻����٣����������������Ҳ����������顣��Ժ���м�����ҡͷ��
���������������徭��
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xuxiake.c" : 1,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"wendingnan4",
]));

	set("no_fight",1);
	setup();
}
int valid_leave(object ob,string dir)
{
  if (dir=="east"&&ob->query_temp("mark/��"))
   ob->delete_temp("mark/��");
   return ::valid_leave(ob,dir);
}
