// thd:music_hole.c
// 97.7.14 bu Aug

inherit ROOM;

void create()
{
      set("short", "������");
	set("long", @LONG
��������������ֻ�Ǹ���С��ɽ�����������ɽ��֮�С�ֻ�Ǹ��ܶ�
��������ʯ��ʯ��������Ļ�����ǿ��ֻҪ��һ������ͻ���ǧ������
�����������㲻�ܴ���˵���������ǻ�����ʹ��ܲ������ʹ�㲻�ò���
���򿹣�������������������ڹ������кô����ڵ����㻹�ܿ���һ����
��(xiao)��
LONG
);

//	set("objects", ([ /* sizeof() == 1 */
//		__DIR__ "npc/chuanfu" :  1,
//	]));

	set("detail", ([ /* sizeof() == 1 */
		"xiao" : "���Ǹ���Ө��͸�����\n",
      ]));

      set("exits", ([ /* sizeof() == 1 */
          "west" : __DIR__"songshu",
	]));
      
	setup();
}

void init()
{
	add_action("do_sing", "sing");
}

int do_sing(string arg)
{
	int gin_cost;
	object me;

	me=this_player();

	if(me->query_skill("force")>150)
	{
		write("����ڹ���ô�ã����������Ѿ����������ˣ��ٴ���Ҳû���ˡ�/n");
		return 1;
	}

	gin_cost = 60 / (int)me->query_attr("int") *4;

	if( (int)me->query("gin") < gin_cost ) 
	{
		write("��̫���ˣ�û�а취���������ˡ�\n");
		return 1;
	}

	me->consume_stat("gin", gin_cost);

	if( (string)me->query("class")!="taohua")
	{
		write(
"��������ϵ��Ǹ����￪ʼ���ࡣ
�㷢���������������ڵķŴ��ַ��䵽��Ķ��ߡ�
����е��ܲ���������ò��˹��࿹��

����ڹ������ˡ�\n");

		me->improve_skill("force", me->query_skill("force")/10+1);
	}
	else
	{
		write(
"��������ϵ��Ǹ����￪ʼ���ࡰ�̺�����������
�㷢���������������ڵķŴ��ַ��䵽��Ķ��ߡ�
����е��ܲ���������ò��˹��࿹��

����ڹ����������ˡ�
��������񹦽����ˡ�\n");

		me->improve_skill("force", me->query_skill("force")/10+1);
		me->improve_skill("suiyu-force", me->query_skill("force")/12+1);
	}

	return 1;
}


