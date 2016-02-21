// Mr.music yangzhou's ������

inherit ROOM;

void create()
{
  set ("short", "������");
  set ("long", @LONG
	�����ǳ��е����ģ������ų��������Ҫ�ֵ�����������ĺ���
���̾�������ʿȺ���ڴˣ����Ǹ����̷��ǵĻƽ�ش���������ʮ��� 
��������ݡ������������������ˣ��޲����Ҷ��顣�㳡������һ��[33mˮ
��[37m�����������ЩС[33m��[37m������ȥ��

LONG
    );

  set("objects", ([ 
                   __DIR__"npc/shusheng" : 1,
                   __DIR__"npc/xiaohaizi" : 1 ,
                   __DIR__"npc/langzhong" :1,
                 ]));

        set("item_desc", ([
                        "��" : "һ��¶���ˮ�ء�\n" ,
                        "chi" : "һ��¶���ˮ�ء�\n" ,
                        "��" : "һЩ��С�Ĳ���..\n" , 
                        "yu" : "һЩ��С�Ĳ���..\n" ,  
                          ]));
        set("resource/water",1);

  set("valid_startroom", 1);
  set("outdoors", "/d/yangzhou");
  set("exits", ([  
    "west" : __DIR__"dongguan3",
    "south" : __DIR__"yingshijie1",
    "north" : __DIR__"pishijie1",
    "east"  : __DIR__"dongguan4",
]));

  setup();
}


void init()
{
    add_action("do_drink", "drink");
    add_action("do_drink", "he");
    add_action("do_eat","eat");
    add_action("do_eat","chi");
}

int do_drink(string sss)
{

object ob;
ob=this_player();
if ((sss!="chi")&&(sss!="shui")&&(sss!="water"))
  {
   return 0;
  }
if(ob->query("water")> ((int)ob->query("str")-10)*10+150 )
 {
  tell_object(ob,"������˻�Ҫ�Ȱ���\n");
  return 1;
 } 
else
 {  
 say(ob->query("name")+"ſ��ˮ�رߣ�һ�������˹���. \n");
 tell_object(ob,"��ſ��ˮ�رߣ�һ�������˹���. \n");
 ob->set("water",((int)ob->query("str")-10)*10+200);

  return 1;
 }

 }

int do_eat(string sss)
{

object ob;
ob=this_player();

if ((sss!="fish")&&(sss!="yu"))
  {
   return 0;
  }

if(ob->query("food") <50 )
  {
 say(ob->query("name")+"��ˮ�����̳�һ��������һ��������ȥ. \n");
 tell_object(ob,"���ˮ�����̳�һ��������һ��������ȥ. \n");
 ob->add("food",5);
  }
else 
 {
//  say (ob->query("name")+",�����ҵ��ĳ԰ɣ�\n");  
  tell_object(ob,"����û����ҵ��ĳ԰ɣ�\n");
 } 

  return 1;
}
