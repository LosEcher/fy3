// thd:songshu.c
// 97.7.14 by Aug

inherit ROOM;

void create()
{
      set("short", "����");
	set("long", @LONG
���ǿó��������ͱ��ϵ�������ĳ��ĳ��ĳ��ĳʱĳ�̣�һ���ѵ�
ָ���ϵ��ǿô�������һ�����Ӵ���������������﷢ѿ������������
������һ�Ŵ����������ڿ��к����ţ�������ֻ���֣�������ľȹ�����
�����ߵ������ء���̧ͷ���Ͽ���������������»���Զ��������������
�Կ���һ����ɽ��ֱͨ�¶���ֻ�ǲ�֪�����ǲ��ǹ���ʵ�������Ķ�����
����ԼԼ���ܿ���һ��ɽ����
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

//	set("detail", ([ /* sizeof() == 1 */
//		"duilian" : "�һ�Ӱ�����񽣣��̺����������\n",
//    ]));

      set("exits", ([ /* sizeof() == 1 */
          "up" : __DIR__"chiff",
          "east" : __DIR__"music_hole",
	]));
      
	set("outdoors", "thd");

	setup();
//	replace_program(ROOM);
}

int valid_leave(object me, string dir)
{
	object room,ob;
	int i;

	if(dir!="up")  return ::valid_leave(me, dir);  

	room=load_object(__DIR__"chiff");

	i=0;
/*	foreach(ob in all_inventory(environment(room)) ) 
      {
	  if( ob==this_object()
	    ||!ob->is_character()) continue;
	  i=1;
	}
*/

	write("��˳����ɽ��������ȥ���������������������������¡�\n");

	if(i==1)
	    return notify_fail(
"��������һ�����������������档
���룺����������ȥ����ðɣ����˻����������أ�
��������˳��ԭ·����������\n");
	else
		return ::valid_leave(me, dir);  
}

