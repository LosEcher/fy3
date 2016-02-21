// lu:bedroom.c
// 97.7.27 by Aug

inherit ROOM;

int HAVE_ONE=1;

void create()
{
	set("short", "����");
	set("long", @LONG
������½ׯ�������ҡ���½��ׯ����һ����½ׯ�������ҵ���ʮ��
���ӣ�ֻ��һ��һ������������ʰ�ĸɸɾ������������룬���˾ͽ�����
���������бб�Ķ��⸱������ (bagua)�����ӵı���������ͨ���԰��
�����Ǵ�����
LONG
	);

	set("item_desc", 	([
		"����" : "�������������õ������ԣ��������е�б������½ׯ�������Ÿ����书���о���������\n",
		"bagua" : "�������������õ������ԣ��������е�б������½ׯ�������Ÿ����书���о���������\n",
	]));
      
	set("exits", ([ /* sizeof() == 2 */
		"south" : __DIR__"hall",
		"north" : __DIR__"garden",
	]));

	set("outdoors", "lu_town");

	setup();
}

void init()
{
	add_action("do_hit", "hit");
}

int do_hit(string arg)
{
    object me;

    if((arg!="bagua")&&(arg!="������")) return 0;
    
    me=this_player();
    message_vision("$Nһ���������������������Ի�ȥ��\n",me);
    if(random(me->query_skill("dodge"))>50)
    {   
      write("��������Դ����ˣ�ǽ��ͻȻ����һ������");
      if(HAVE_ONE==1) 
      {
        write("������һ�ѱ�����\n");

        if( me->over_encumbranced() ) 
          write("�����Ѿ����ɹ����ˣ�û�����ý��� :-( \n");
        else
        {
          new(__DIR__"obj/zhuifeng")->move(me);
          write("���õ�һ��׷�罣��\n");
          HAVE_ONE=0;
        }
        
        write("����һ��������������������ˡ�\n");
      }
      else 
        write("������ʲôҲû�С�\n����һ��������������������ˡ�\n");
    }
    else
    {
      write("������ˤ�˸�����ʺ��\n");

      me->set("eff_kee", me->query("max_kee")/5+
		random(me->query("max_kee")/5) ); 
    } 

    return 1;
}
