// Room: /d/quanzhou/duchuan 
inherit ROOM; 
 
void create ()
{
  set ("short", "¥��");
  set ("long", @LONG
һ������ߵ�¥��,��֧��׷������˷�,����ˮ����æ����ê,����
����������,ȴ�Եø����ʵ,�������־��������˵ĺ���.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/chuanfu.c" : 1,
]));
  set("no_fight", 1);
  set("no_magic", 1);
  set("outdoors", "/d/quanzhou");

  setup();
}
void init()
{
  if (!this_player()->query_temp("luyin/target")&&this_player()->query("id")!="chuan fu")
      {  
        tell_object(this_player(),"��������һ�Ű�����������.\n");
        this_player()->set_temp("block_msg/all",1);
        this_player()->move(__DIR__"haigang");
        this_player()->delete_temp("block_msg/all");
      }
 return;
}