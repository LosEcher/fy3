// thd:fall.c
// 97.7.14 bu Aug

inherit ROOM;

void create()
{
      set("short", "ǧ����");
	set("long", @LONG
������ǧ���١�����ٲ���Ȼ������������ǧ��֮�ߣ�����Ϊ������
�⣬��������ٲ������Ƽ�����磬��֮��½��ɽ�󴨵İ���˿��
����ѷɫ����վ���ٲ�����ʮ��֮�⣬���ܸ��ܵ�����������ľ޴�����
��������ǵص�ˮ���ر�����עĿ�����ٲ������һ���ʯ������ǧ��
��ĳ�����������Ѿ��⻬�������
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

	set("detail", ([ /* sizeof() == 1 */
		"rock" : "����ϡ��������ʯ�Ͽ����������ҡ������֡�\n",
      ]));

      set("exits", ([ /* sizeof() == 1 */
          "west" : __DIR__"table",
  	]));
      
	set("outdoors", "thd");

	setup();
//	replace_program(ROOM);
}

void init()
{
	add_action("do_jump", "jump");
}

int do_jump(string arg)
{
	object me,ob;

	if((arg!="rock")&&(arg!="������")) return 0;
	
	me=this_player();

	message_vision("$N����һԾ�����϶����ҡ�\n",me);

	if(me->query_skill("dodge")<20)
		message_vision("����ʯ��̫���ˣ�$N���ò������˻�����\n",me);
	else
		me->move(__DIR__"rock");

	return  1;
}