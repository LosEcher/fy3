// Room: /d/sandboy/duanya 
inherit ROOM; 
 
void create() 
{ 
  set ("short", "����");
  set ("long", @LONG
����֮ǰ����Ȼǰ��ȥ·����ǰ��һƬ��ʮ�ɷ�Բ��ƽ�أ�������ʮ
�������.һ���ظߣ������ɡ�������������ɷ�ԲһƬ�ݵ�.֦ҶŨ�ܣ�
���������ϵľ��
LONG);

  set("outdoors", "/d/sandboy");
  setup();
}
void init()
{
    object ob;
    ob=this_player();
    remove_call_out("greeting");
    call_out("greeting",30,ob);
}
void greeting(object ob)
{
     object ob1;
   if (!present("chair",this_object()))
         {
           write("ֻ�������ϻ���һ����һ�����ӻλε�����������!\n");
           ob1=new(__DIR__"obj/chair");
           ob1->move(this_object());
         }
    remove_call_out("get_down");
    call_out("get_down",7,ob);
    return;
}
void get_down(object ob)
{
    object ob1;
    if (!present("hua yikun",this_object()))
       {
       write("���������˹���һЦ��Ծ���������������ڻ�Ƥ��������!\n");
       ob1=new(__DIR__"npc/huayikun");
       ob1->move(this_object());
       }
    return;
}
           