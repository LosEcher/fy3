inherit NPC;
int go_leave();
void on_board();
void arrive();
void create()
{
        set_name("����ү",({"liusan","liu"}));
        set("gender","����");
        set("combat_exp",300000);
        set("force",700);
        set("max_force",700);
        set("nickname","����");
        set("long","�����������⺣Ͽ���ߵ��˻���׬�����,����
���������Ҫ����,������������ڳ���������.
(ask liu about ����).");
        set("inquiry",([
                 "����":(:go_leave:),
                 "����":"����ǰ�����˼ҵĻ�,��ׯ������ȥ,����һֻ�۾�!\n",
             ]));
        set("age",43);
              set_skill("parry",120);
              set_skill("dodge",120);
              set_skill("unarmed",120);
              setup();
              carry_object("/obj/cloth")->wear();
              add_money("silver",80);
 }
int go_leave()
{  object ob,room;
    ob=this_player();
    if (!ob||environment()!=environment(ob)) return;
    room=load_object("/d/taiwan/chuan");
    if (room->query("exits/out")=="/d/taiwan/matou")
    {  command("say ���⴬��Ҫ��Ȫ��ȥ,���Դ���һ��!\n");
       command("say ���Ե�һ��,��װ�������!\n");
       if (clonep(this_object())) call_out("on_board",10,1);
      return 1;
   }
  command("say �㲻���Ѿ��ڴ�����ô?\n");
  return 1;
}
void on_board()
{
	object * all,ob,room;
	int i,j;

	ob=this_object();
	room=load_object("/d/taiwan/matou");
	i=0;
	all = all_inventory(environment(ob));
	        
	for (j=0; j<sizeof(all); j++) 
	{
		if( all[j]==this_object() ||!all[j]->is_character()) continue;
		{ i=1; }
	}
	if(i==1)
	{      command("emote ��������:��---��---��---\n");
		message("vision", "ˮ�ֳ���緫,�������ʻȥ��\n",room );	
		message_vision("ˮ�ֳ���緫,С�������ʻȥ��\n",this_object());	

		if( clonep(this_object()) ) call_out("arrive", 20, 1);
      room = load_object("/d/taiwan/chuan");
	room->delete("exits/out");
      room = load_object("/d/taiwan/matou");
	room->delete("exits/in");
	
        }
    else return;
    	
}

void arrive()
{
	object *all,ob,room,ob1;
	int i;
       ob1=this_player();
	room = load_object("/d/quanzhou/haigang");
      message_vision("С���������ؿ����˰�����,$Næ��ж��,û������!\n",this_object());
      message("vision", "��������һ��С���������ˡ�\n",room);

	ob=this_object();
	all = all_inventory(environment(ob));	        
	for (i=0; i<sizeof(all); i++) 
	{
		if( all[i]==this_object() ||!all[i]->is_character()) continue;
		{
			message_vision("$N˳��̤�Ű����ϰ�ȥ��\n",all[i]);
			message("vision",all[i]->name()+"˳��̤�Ű����ϰ�����\n",room);

			all[i]->move("/d/quanzhou/haigang");
		}
	}

      room=load_object("/d/taiwan/matou");
      message("vision", "һ��С����������������ͷ,�緫���и�����'��'�֡�\n",room);
      room->set("exits/in","/d/taiwan/chuan");
           load_object("/d/taiwan/chuan")->set("exits/out","/d/taiwan/matou");
           return;
}
    
